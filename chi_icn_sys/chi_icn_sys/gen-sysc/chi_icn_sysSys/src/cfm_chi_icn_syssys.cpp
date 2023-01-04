//<#!@READ-ONLY-SECTION-START@!#>
/*
 * \class cfm_chi_icn_syssys
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of chi_icn_sysSys generated by C++ Generator for SystemC/TLM2
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
//Start of 'chi_icn_sysSys definitions' algorithm generated code
//connect RN-icn
//RN.rnf.port <-bind-> icn.port_RN_F[0]->socket
void customized_soc_bind(cfm_chi_icn_tlm& TLMBus, cfm_tg_rnf_tlm* TLMInitiator,
		int i) {
	//(TLMInitiator->socket).bind(*(TLMBus.t_sk[0]));
	(TLMInitiator->rnf)->port.txreq_init_socket.bind(
			(TLMBus.port_RN_F[i])->rxreq_tgt_socket);
	(TLMInitiator->rnf)->port.txrsp_init_socket.bind(
			(TLMBus.port_RN_F[i])->rxrsp_tgt_socket);
	(TLMInitiator->rnf)->port.txdat_init_socket.bind(
			(TLMBus.port_RN_F[i])->rxdat_tgt_socket);

	(TLMBus.port_RN_F[i])->txrsp_init_socket.bind(
			(TLMInitiator->rnf)->port.rxrsp_tgt_socket);
	(TLMBus.port_RN_F[i])->txdat_init_socket.bind(
			(TLMInitiator->rnf)->port.rxdat_tgt_socket);
	(TLMBus.port_RN_F[i])->txsnp_init_socket.bind(
			(TLMInitiator->rnf)->port.rxsnp_tgt_socket);
}

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
/*
 void cfm_connector_st::bind(cfm_mem_tlm* mem_tlm,cfm_sn_tlm* sn_tlm ){
 //sn_tlm->init_socket(mem_tlm->socket);
 sn_tlm->init_socket.bind(mem_tlm->socket);

 }
 */
//End of 'chi_icn_sysSys definitions' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>

/// \name constructor
//@{
cfm_chi_icn_syssys::cfm_chi_icn_syssys(sc_core::sc_module_name name) :
		cf_platform(name), bus_CHI_ICN_TLM("CHI_ICN_TLM"), bus_connector_st(
				"connector_st") {
	cf_platform::init();
	mem_tlm = new cfm_mem_tlm("mem_tlm");
	// processor after active callback
	CF_PROC_CB_AFTER_ACTIVE((*mem_tlm),
			cfm_mem_tlm::itc_proc_mem_tlm_cb_after_active);

	// processor after inactive callback
	CF_PROC_CB_AFTER_INACTIVE((*mem_tlm),
			cfm_mem_tlm::itc_proc_mem_tlm_cb_after_inactive);
	sn_tlm = new cfm_sn_tlm("sn_tlm");
	// processor after active callback
	CF_PROC_CB_AFTER_ACTIVE((*sn_tlm),
			cfm_sn_tlm::itc_proc_sn_tlm_cb_after_active);

	// processor after inactive callback
	CF_PROC_CB_AFTER_INACTIVE((*sn_tlm),
			cfm_sn_tlm::itc_proc_sn_tlm_cb_after_inactive);

	// instantiation of tg_rnf_tlm_vec
	for (cf_count i = 0; i < (cf_count) 2; i++) {
		cfm_tg_rnf_tlm* module = new cfm_tg_rnf_tlm(
				cf_string("tg_rnf_tlm[%d]", i).c_str());
		CF_ASSERT (module)
		tg_rnf_tlm_vec.push_back(module);
	}
	for (cf_count i = 0; i < (cf_count) 2; i++) {
		// processor after active callback
		CF_PROC_CB_AFTER_ACTIVE((*tg_rnf_tlm_vec[i]),
				cfm_tg_rnf_tlm::itc_proc_tg_rnf_tlm_cb_after_active);

		// processor after inactive callback
		CF_PROC_CB_AFTER_INACTIVE((*tg_rnf_tlm_vec[i]),
				cfm_tg_rnf_tlm::itc_proc_tg_rnf_tlm_cb_after_inactive);
	}
	// connections
	//model: mem_tlm's connector_st is straming interface 

	customized_soc_bind(bus_CHI_ICN_TLM, sn_tlm);	//SoC TLM2 mono instance
	//model: sn_tlm's connector_st is straming interface 
	bus_connector_st.bind(mem_tlm, sn_tlm);

	for (cf_count i = 0; i < (cf_count) 2; i++) {
		cfm_tg_rnf_tlm* module = tg_rnf_tlm_vec[i];
		if (module != nullptr) {
			customized_soc_bind(bus_CHI_ICN_TLM, tg_rnf_tlm_vec[i], i);	//SoC TLM2 multiple instance
		}
	}

	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'chi_icn_sysSys constructor' algorithm generated code

	//End of 'chi_icn_sysSys constructor' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

	cf_platform::elab_end();
}
//@}

/// \name destructor
//@{
cfm_chi_icn_syssys::~cfm_chi_icn_syssys(void) {
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'chi_icn_sysSys destructor' algorithm generated code

	//End of 'chi_icn_sysSys destructor' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
	for (vector<cfm_tg_rnf_tlm*>::const_iterator vi = tg_rnf_tlm_vec.begin();
			vi != tg_rnf_tlm_vec.end(); vi++) {
		delete (*vi);
	}
	delete mem_tlm;
	delete sn_tlm;
}
//@}

/// \name pre-elaboration section
//@{
void cfm_chi_icn_syssys::cb_before_elaboration(void) {
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'chi_icn_sysSys pre elaboration' algorithm generated code

	//End of 'chi_icn_sysSys pre elaboration' algorithm generated code
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
	//Start of 'chi_icn_sysSys initializations' algorithm generated code

	//End of 'chi_icn_sysSys initializations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}
//@}


//<#!@READ-ONLY-SECTION-END@!#>