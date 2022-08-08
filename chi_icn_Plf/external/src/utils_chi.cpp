/*
 * Copyright (c) 2019 Xilinx Inc.
 * Written by Francisco Iglesias.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */


#include "test-modules/utils-chi.h"
#include <vector>
#include "tlm-bridges/amba-chi.h"

using namespace AMBA::CHI;

namespace utils {
namespace CHI {

typedef std::vector<CHITransfer> CHITransferVec;
typedef std::vector<CHITransfer>::iterator CHITransferIt;

CHITransferVec merge(CHITransferVec transfers)
{
	CHITransferVec merged_transfers;

	for (auto& t : transfers) {
		if (merged_transfers.size() > 0) {
			CHITransfer& last = merged_transfers.back();

			if (t.cmd == BYTE_ENABLE) {
				last.byte_enable = t.byte_enable;
				last.byte_enable_length = t.byte_enable_length;
				// Clear merge pointer to avoid it getting
				// freed on destruction of t.
				t.byte_enable = nullptr;
			} else if (t.cmd == STREAMING_WIDTH) {
				last.streaming_width = t.streaming_width;
			} else if (t.cmd == EXPECT) {
				last.expect = t.expect;
				// Clear merge pointer to avoid it getting
				// freed on destruction of t.
				t.expect = nullptr;
			} else if (t.cmd == EXT_GEN_ATTR) {
				last.ext.chiattr = t.ext.chiattr;
			}
		}

		if (t.cmd == CHITransfer::READ ||
				t.cmd == CHITransfer::WRITE ||
				t.cmd == CHITransfer::IGNORE ) {
			merged_transfers.push_back(t);
		}
	}

	return merged_transfers;
}

#define DATA(x...) ((const unsigned char[]) { x })

CHITransfer Expect(const unsigned char *expect, int length)
{
	CHITransfer t;
	t.cmd = EXPECT;
	t.expect = expect;
	t.length = length;
	return t;
}

CHITransfer Read(uint64_t address, unsigned int length = 4)
{
	CHITransfer t;
	t.cmd = CHITransfer::READ;
	t.addr = address;
	t.length = length;
	t.streaming_width = length;
	return t;
}

CHITransfer Write(uint64_t address, const unsigned char *data, unsigned int length = 4)
{
	CHITransfer t;
	t.cmd = CHITransfer::WRITE;
	t.addr = address;
	t.data = data;
	t.length = length;
	t.streaming_width = length;
	return t;
}

CHITransfer ByteEnable(const unsigned char *byte_enable,
                        unsigned int byte_enable_length)
{
	CHITransfer t;
	t.cmd = BYTE_ENABLE;
	t.byte_enable = byte_enable;
	t.byte_enable_length = byte_enable_length;
	return t;
}

CHITransfer StreamingWidth(unsigned int streaming_width)
{
	CHITransfer t;
	t.cmd = STREAMING_WIDTH;
	t.streaming_width = streaming_width;
	return t;
}


CHITransfer AtomicStore(uint64_t address,
			const unsigned char *data,
			unsigned int length = 1,
			uint8_t opcode = 0)
{
	CHITransfer t;
	t.cmd = CHITransfer::WRITE;
	t.addr = address;
	t.data = data;
	t.length = length;
	t.streaming_width = length;
	t.ext.chiattr.enabled = true;
	t.ext.chiattr.opcode = Req::AtomicStore | (opcode & AtomicOpMask);
	t.ext.chiattr.snoopme = true;
	return t;
}

CHITransfer AtomicLoad(uint64_t address,
			const unsigned char *data,
			unsigned int length = 1,
			uint8_t opcode = 0)
{
	CHITransfer t;
	t.cmd = CHITransfer::READ;
	t.addr = address;
	t.length = length;
	t.streaming_width = length;
	t.ext.chiattr.enabled = true;
	t.ext.chiattr.opcode = Req::AtomicLoad | (opcode & AtomicOpMask);
	t.ext.chiattr.snoopme = true;
	memcpy(t.ext.chiattr.data, data, length);
	return t;
}

CHITransfer AtomicSwap(uint64_t address, const unsigned char *data, unsigned int length)
{
	CHITransfer t;
	t.cmd = CHITransfer::READ;
	t.addr = address;
	t.length = length;
	t.streaming_width = length;
	t.ext.chiattr.enabled = true;
	t.ext.chiattr.opcode = Req::AtomicSwap;
	t.ext.chiattr.snoopme = true;
	memcpy(t.ext.chiattr.data, data, length);
	return t;
}

CHITransfer AtomicCompare(uint64_t address, const unsigned char *data, unsigned int length)
{
	CHITransfer t;
	t.cmd = CHITransfer::READ;
	t.addr = address;
	t.length = length/2;
	t.streaming_width = length;
	t.ext.chiattr.enabled = true;
	t.ext.chiattr.opcode = Req::AtomicCompare;
	t.ext.chiattr.snoopme = true;
	memcpy(t.ext.chiattr.data, data, length);
	return t;
}

CHITransfer ExclusiveLoad(uint64_t address, unsigned int length = 4)
{
	CHITransfer t;
	t.cmd = CHITransfer::READ;
	t.addr = address;
	t.length = length;
	t.streaming_width = length;
	t.ext.chiattr.enabled = true;
	t.ext.chiattr.exclusive = true;
	return t;
}

CHITransfer ExclusiveStore(uint64_t address, const unsigned char *data, unsigned int length = 4)
{
	CHITransfer t;
	t.cmd = CHITransfer::WRITE;
	t.addr = address;
	t.data = data;
	t.length = length;
	t.streaming_width = length;
	t.ext.chiattr.enabled = true;
	t.ext.chiattr.exclusive = true;
	return t;
}

CHITransfer DVMOperation(uint64_t address,
			const unsigned char *data = NULL,
			unsigned int length = 0)
{
	static const uint8_t dummy[8] = { 0 };
	CHITransfer t;

	t.cmd = CHITransfer::IGNORE;
	t.addr = address;
	t.length = DVM::DVMOpSize;
	t.data = dummy;
	t.streaming_width = length;
	t.ext.chiattr.enabled = true;
	t.ext.chiattr.opcode = Req::DVMOp;
	t.ext.chiattr.snoopme = true;
	t.ext.chiattr.secure = true;

	if (data) {
		if (length >= DVM::DVMOpSize) {
			length = DVM::DVMOpSize;
		}

		memcpy(t.ext.chiattr.data, data, length);
	}

	return t;
}

}
}