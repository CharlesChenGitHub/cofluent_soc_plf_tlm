#ifndef _MEMORY_H_
#define _MEMORY_H_
//#include "cfm_chi_icn_plf_packupplf.h"
#include "systemc"
#include "cofluent.h"
using namespace sc_core;
using namespace sc_dt;
using namespace std;
using namespace cf_core;
#include "tlm.h"
#include "tlm_utils/simple_target_socket.h"

class memory
: public cf_core::cf_processor
{
public:
	tlm_utils::simple_target_socket<memory> socket;

	const sc_time LATENCY;
	//memory(sc_core::sc_module_name name, sc_time latency= sc_time(10, SC_NS), off_t size_= 32*64,
	       //uint8_t *buf = NULL);

	 SC_CTOR(memory)
  		: socket("socket"),cf_processor("memory"),LATENCY(sc_time(10, SC_NS)),
	  mem(NULL),
	  free_mem(false)
  {
	socket.register_b_transport(this, &memory::b_transport);
	socket.register_get_direct_mem_ptr(this, &memory::get_direct_mem_ptr);
	socket.register_transport_dbg(this, &memory::transport_dbg);

	//size = 32*64;
	size = 1024 * 1024 * 16 * 32;
	if (mem == NULL) {
		mem = new uint8_t[size];
		memset(&mem[0], 0, size);
		free_mem = true;
	}
  }

	~memory();

	virtual void b_transport(tlm::tlm_generic_payload& trans,
					sc_time& delay);
	virtual bool get_direct_mem_ptr(tlm::tlm_generic_payload& trans,
                                  tlm::tlm_dmi& dmi_data);
	virtual unsigned int transport_dbg(tlm::tlm_generic_payload& trans);

private:
	uint8_t *mem;
	off_t size;

	bool free_mem;
};
#endif