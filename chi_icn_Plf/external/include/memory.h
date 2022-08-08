#ifndef _MEMORY_H_
#define _MEMORY_H_


class memory
: public sc_core::sc_module
{
public:
	tlm_utils::simple_target_socket<memory> socket;

	const sc_time LATENCY;

	memory(sc_core::sc_module_name name, sc_time latency, off_t size_,
	       uint8_t *buf = NULL);

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