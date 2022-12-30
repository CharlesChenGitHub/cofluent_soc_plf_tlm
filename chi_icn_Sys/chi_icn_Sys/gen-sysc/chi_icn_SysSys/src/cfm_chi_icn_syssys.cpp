//<#!@READ-ONLY-SECTION-START@!#>
/*
 * \class cfm_chi_icn_syssys
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of chi_icn_SysSys generated by C++ Generator for SystemC/TLM2
 */
/// Model Source includes start
#include "cfm_chi_icn_syssys.h"
/// Model Source includes end
using namespace std;
using namespace sc_core;
using namespace cf_dt;
using namespace cf_pk;
using namespace cf_core;

//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'chi_icn_SysSys definitions' algorithm generated code

//connect SN(memory)-icn
//SN.socket <-bind-> icn.port_SN[0]->socket
//mem_sn(cfm_mem_SN <-SlaveNode_F)  SlaveNode_F.sockets
void customized_soc_bind(cfm_chi_icn_tlm& TLMBus, cfm_sn_tlm* TLMMemory) {
	//TLMBus.memmap(0x40000000ULL, 0x100 - 1,ADDRMODE_RELATIVE, -1, TLMMemory->init_socket);
	TLMMemory->txrsp_init_socket.bind((TLMBus.port_SN)->rxrsp_tgt_socket);
	TLMMemory->txdat_init_socket.bind((TLMBus.port_SN)->rxdat_tgt_socket);

	(TLMBus.port_SN)->txreq_init_socket.bind(TLMMemory->rxreq_tgt_socket);
	(TLMBus.port_SN)->txdat_init_socket.bind(TLMMemory->rxdat_tgt_socket);

	//TLMMemory->init_socket(TLMMemory->mem.socket);
}

//bind bridge_rn with chi-icn
void customized_soc_bind(cfm_chi_icn_tlm& TLMBus, cfm_bridge_rn* bridge_rn) {
	(bridge_rn->cache).txreq_init_socket.bind(
			(TLMBus.port_RN_F[0])->rxreq_tgt_socket);
	(bridge_rn->cache).txrsp_init_socket.bind(
			(TLMBus.port_RN_F[0])->rxrsp_tgt_socket);
	(bridge_rn->cache).txdat_init_socket.bind(
			(TLMBus.port_RN_F[0])->rxdat_tgt_socket);

	(TLMBus.port_RN_F[0])->txrsp_init_socket.bind(
			(bridge_rn->cache).rxrsp_tgt_socket);
	(TLMBus.port_RN_F[0])->txdat_init_socket.bind(
			(bridge_rn->cache).rxdat_tgt_socket);
	(TLMBus.port_RN_F[0])->txsnp_init_socket.bind(
			(bridge_rn->cache).rxsnp_tgt_socket);

}
//End of 'chi_icn_SysSys definitions' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>

/// \name constructor
//@{
cfm_chi_icn_syssys::cfm_chi_icn_syssys(sc_core::sc_module_name name) :
		cf_platform(name), bus_CHI_ICN_TLM("CHI_ICN_TLM"), bus_connector_st1(
				"connector_st1"), bus_connector_st2("connector_st2") {
	cf_platform::init();
	bridge_rn = new cfm_bridge_rn("bridge_rn");
	// processor after active callback
	CF_PROC_CB_AFTER_ACTIVE((*bridge_rn),
			cfm_bridge_rn::itc_proc_bridge_rn_cb_after_active);

	// processor after inactive callback
	CF_PROC_CB_AFTER_INACTIVE((*bridge_rn),
			cfm_bridge_rn::itc_proc_bridge_rn_cb_after_inactive);
	mem_tlm = new cfm_mem_tlm("mem_tlm");
	// processor after active callback
	CF_PROC_CB_AFTER_ACTIVE((*mem_tlm),
			cfm_mem_tlm::itc_proc_mem_tlm_cb_after_active);

	// processor after inactive callback
	CF_PROC_CB_AFTER_INACTIVE((*mem_tlm),
			cfm_mem_tlm::itc_proc_mem_tlm_cb_after_inactive);
	riscv_vp = new cfm_riscv_vp("riscv_vp");
	// processor after active callback
	CF_PROC_CB_AFTER_ACTIVE((*riscv_vp),
			cfm_riscv_vp::itc_proc_riscv_vp_cb_after_active);

	// processor after inactive callback
	CF_PROC_CB_AFTER_INACTIVE((*riscv_vp),
			cfm_riscv_vp::itc_proc_riscv_vp_cb_after_inactive);
	sn_tlm = new cfm_sn_tlm("sn_tlm");
	// processor after active callback
	CF_PROC_CB_AFTER_ACTIVE((*sn_tlm),
			cfm_sn_tlm::itc_proc_sn_tlm_cb_after_active);

	// processor after inactive callback
	CF_PROC_CB_AFTER_INACTIVE((*sn_tlm),
			cfm_sn_tlm::itc_proc_sn_tlm_cb_after_inactive);

	// connections
	//model: bridge_rn's connector_st1 is straming interface 
	customized_soc_bind(bus_CHI_ICN_TLM, bridge_rn);	//SoC TLM2 mono instance

	//model: mem_tlm's connector_st2 is straming interface 

	//model: riscv_vp's connector_st1 is straming interface 
	bus_connector_st1.bind(bridge_rn, riscv_vp);

	customized_soc_bind(bus_CHI_ICN_TLM, sn_tlm);	//SoC TLM2 mono instance
	//model: sn_tlm's connector_st2 is straming interface 
	bus_connector_st2.bind(mem_tlm, sn_tlm);

	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'chi_icn_SysSys constructor' algorithm generated code

	//End of 'chi_icn_SysSys constructor' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

	cf_platform::elab_end();
}
//@}

/// \name destructor
//@{
cfm_chi_icn_syssys::~cfm_chi_icn_syssys(void) {
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'chi_icn_SysSys destructor' algorithm generated code

	//End of 'chi_icn_SysSys destructor' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
	delete bridge_rn;
	delete mem_tlm;
	delete riscv_vp;
	delete sn_tlm;
}
//@}

/// \name pre-elaboration section
//@{
void cfm_chi_icn_syssys::cb_before_elaboration(void) {
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'chi_icn_SysSys pre elaboration' algorithm generated code

	//End of 'chi_icn_SysSys pre elaboration' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}
//@}

/// \name initialize attributes
//@{
void cfm_chi_icn_syssys::cb_init_attributes() {

// initialize subsystem attributes
	cfa_cycle_period.init(cf_expr_time(10, CF_NS));
	cfa_voltage.init(cf_voltage(3, CF_V));

	return;
}
//@}

/// \name initialize definitions
//@{
void cfm_chi_icn_syssys::cb_init_local_vars(void) {
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'chi_icn_SysSys initializations' algorithm generated code

	//End of 'chi_icn_SysSys initializations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}
//@}


//<#!@READ-ONLY-SECTION-END@!#>