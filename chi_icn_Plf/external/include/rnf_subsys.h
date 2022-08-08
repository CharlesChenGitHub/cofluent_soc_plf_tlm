

#include <sstream>

#define SC_INCLUDE_DYNAMIC_PROCESSES

#include "systemc"
#include "cofluent.h"

#include "tlm.h"
#include "tlm_utils/simple_initiator_socket.h"
#include "tlm_utils/simple_target_socket.h"

//#include "checkers/pc-axilite.h"
#include "traffic-generators/tg-tlm.h"
#include "rnf-chi.h"

#include "traffic-generators/random-traffic.h"

#include "iconnect-chi.h"
#include "sn-chi.h"
#include "memory.h"

//#include "utils-chi.h"
#include "test-modules/utils-chi.h"
//#include "checkers/pc-chi.h"


using namespace utils::CHI;

/*
using namespace sc_core;
using namespace sc_dt;
using namespace std;
using namespace cf_core;
*/

#define NODE_ID_RNF0 0
#define NODE_ID_RNF1 1

#define NUM_RN_F 2

#define CACHE_SIZE (4 * CACHELINE_SZ)
#define LINE(l) ((l) * CACHELINE_SZ)

#define RAM_SIZE (32 * CACHELINE_SZ)

// Increase for more random traffic
#define NUM_TXNS_RNF0 20
#define NUM_TXNS_RNF1 20000

//typedef TLMTrafficGenerator::DoneCallback TGDoneCallBack;

const unsigned char burst_data[140] = {
	0x11, 0x12, 0x13, 0x14, 0x21, 0x22, 0x23, 0x24,
	0x21, 0x22, 0x23, 0x24, 0x31, 0x32, 0x33, 0x34,
	0x31, 0x32, 0x33, 0x34, 0x41, 0x42, 0x43, 0x44,
	0x41, 0x42, 0x43, 0x44, 0x51, 0x52, 0x53, 0x54,

	0x11, 0x12, 0x13, 0x14, 0x21, 0x22, 0x23, 0x24,
	0x21, 0x22, 0x23, 0x24, 0x31, 0x32, 0x33, 0x34,
	0x31, 0x32, 0x33, 0x34, 0x41, 0x42, 0x43, 0x44,
	0x41, 0x42, 0x43, 0x44, 0x51, 0x52, 0x53, 0x54
};

static TrafficDesc xfers(merge({
	//
	// ReadUnique
	// line[0]
	//
	Write(LINE(0), DATA(0xFF, 0xFF, 0xFF, 0xFF)),
	Read(LINE(0)),
		Expect(DATA(0xFF, 0xFF, 0xFF, 0xFF), 4),

	//
	// WriteBackFull + MakeUnique
	// line[0]
	//
	Write(LINE(4), burst_data, CACHELINE_SZ),
	Read(LINE(4), CACHELINE_SZ),
		Expect(burst_data, CACHELINE_SZ),

	// ReadShared
	// line[2]
	Read(LINE(2)),
		Expect(DATA(0x0, 0x0, 0x0, 0x0), 4),

	//
	// Evict + ReadShared + Evict + MakeUnique
	// line[1]
	//
	Read(LINE(1)),
	Write(LINE(5), burst_data, CACHELINE_SZ),

	// CleanUnique
	// line[1]
	Write(LINE(17), burst_data, CACHELINE_SZ),

	// CleanUnique second time
	// line[3]
	Write(LINE(15), burst_data, CACHELINE_SZ),

	// WriteNoSnpFull
	Write(LINE(28), &burst_data[32], CACHELINE_SZ),

	// ReadNoSnp
	Read(LINE(28), CACHELINE_SZ),
		Expect(&burst_data[32], CACHELINE_SZ),

	// WriteNoSnpPtl
	Write(LINE(28), &burst_data[4], 8),

	// ReadNoSnp
	Read(LINE(28), 8),
		Expect(&burst_data[4], 8),

	// AtomicStore
	AtomicStore(LINE(27) + 2, DATA(0x0, 0x1), 2),

	// AtomicLoad
	AtomicLoad(LINE(27) + 2, DATA(0x0, 0x1), 2),
		Expect(DATA(0x0, 0x1), 2),

	// AtomicStore
	AtomicStore(LINE(27), DATA(0x1), 1),

	// AtomicLoad
	AtomicLoad(LINE(27), DATA(0x1), 1),
		Expect(DATA(0x1), 1),

	AtomicLoad(LINE(27), DATA(0x1), 1),
		Expect(DATA(0x2), 1),

	Write(LINE(27), DATA(0x0, 0x0), 2),

	Read(LINE(27+4)),

	AtomicLoad(LINE(27), DATA(0x0, 0x1), 2),
		Expect(DATA(0x0, 0x0), 2),
	AtomicLoad(LINE(27), DATA(0x1, 0x1), 2),
		Expect(DATA(0x0, 0x1), 2),
	AtomicLoad(LINE(27), DATA(0x0, 0x1), 2),
		Expect(DATA(0x1, 0x2), 2),
	AtomicLoad(LINE(27), DATA(0xFF, 0xFF), 2, Req::Atomic::CLR),
		Expect(DATA(0x1, 0x3), 2),

	AtomicSwap(LINE(27), DATA(0xFF, 0xFF), 2),
		Expect(DATA(0x0, 0x0), 2),
	AtomicSwap(LINE(27), DATA(0x0, 0x0), 2),
		Expect(DATA(0xFF, 0xFF), 2),

	AtomicCompare(LINE(27), DATA(0x0, 0x0, 0xFF, 0xFF), 4),
		Expect(DATA(0x0, 0x0), 2),
	AtomicCompare(LINE(27), DATA(0xFF, 0xFF, 0x0, 0x0), 4),
		Expect(DATA(0xFF, 0xFF), 2),

	AtomicCompare(LINE(27)+8, DATA(0x0, 0x0, 0xFF, 0xFF), 4),
		Expect(DATA(0x00, 0x00), 2),

	ExclusiveLoad(LINE(26), 4),
	ExclusiveStore(LINE(26), DATA(0x1, 0x2, 0x3, 0x4)),
	Read(LINE(26), 4),
		Expect(DATA(0x1, 0x2, 0x3, 0x4), 4),

	// Test a failed exclusive
	ExclusiveStore(LINE(26), DATA(0x2, 0x4, 0x5, 0x6)),
	Read(LINE(26), 4),
		Expect(DATA(0x1, 0x2, 0x3, 0x4), 4),

	DVMOperation(0),
}));

// Top simulation module.
//SC_MODULE(rnf0_subsys)
class rnf_subsys : public cf_core::cf_processor 
{
public:
	RandomTraffic rand_traffic;
	
	RequestNode_F<NODE_ID_RNF0, CACHE_SIZE> rnf;

	//TGDoneCallBack m_tgDoneCB;
//	CHIChecker_t checker0;

	//SC_HAS_PROCESS(core0_subsys);

	rnf_subsys(sc_module_name name) :

		rand_traffic(0, RAM_SIZE, (~(0x3llu)),
				1, RAM_SIZE, RAM_SIZE, NUM_TXNS_RNF0),
		
		rnf("rnf", rand_traffic),
		cf_processor("rnf_subsys")
	{
		rnf.GetTrafficGenerator().setStartDelay(sc_time(100, SC_US));
		rnf.GetTrafficGenerator().addTransfers(xfers, 0, NULL);
		rnf.GetTrafficGenerator().enableDebug();

	}
};