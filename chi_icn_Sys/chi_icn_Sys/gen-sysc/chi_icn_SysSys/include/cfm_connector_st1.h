//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_connector_st1
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of chi_icn_SysSys generated by C++ Generator for SystemC/TLM2
 */

#ifndef COFS_MODEL_CHI_ICN_SYSSYS_CONNECTOR_ST1
#define COFS_MODEL_CHI_ICN_SYSSYS_CONNECTOR_ST1

#include "cofluent.h"
//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'connector_st1 includes' algorithm generated code
#include "cfm_riscv_vp.h"
#include "cfm_bridge_rn.h"

#ifndef _EMPTY_H_
#define _EMPTY_H_
#include "empty.h"
#endif
//End of 'connector_st1 includes' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>

///    \defgroup dxgconnector_st1 Function connector_st1
//@{
///        \page dxpconnector_st1
//@{
///    \brief connector_st1 function model.
class cfm_connector_st1:
/*Start of 'Inherited classes declaration' from connector_st1 property generated code*/
public empty
/*End of 'Inherited classes declaration' from connector_st1 property generated code*/
{
public:
	/// constructor
	cfm_connector_st1(sc_core::sc_module_name name);

	/// destructor
	virtual ~cfm_connector_st1(void);

	/// before arbitration callback
	void itc_bus_connector_st1_cb_before_arbitration(
			const tlm::tlm_generic_payload & _trans);

	/// after arbitration callback
	void itc_bus_connector_st1_cb_after_arbitration(
			const tlm::tlm_generic_payload & _trans);

	/// before transfer callback
	void itc_bus_connector_st1_cb_before_transfer(
			const tlm::tlm_generic_payload & _trans);

	/// after transfer callback
	void itc_bus_connector_st1_cb_after_transfer(
			const tlm::tlm_generic_payload & _trans);

protected:
	/// initialize definitions
	void cb_init_local_vars(void);

	/// \name user-defined local declarations
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'connector_st1 local declarations' algorithm generated code
public:
	void bind(cfm_bridge_rn* bridge_rn, cfm_riscv_vp* riscv_vp) {
		//(sn_tlm->init_socket).bind(mem_tlm->socket);
		(((riscv_vp->adapter).iss_mem_if).isock[0]).bind(
				(bridge_rn->cache).target_socket);
		cout << "connector_st1 bind done" << endl;
	}
	;
	//End of 'connector_st1 local declarations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

};

//@}
//@}
#endif // COFS_MODEL_CHI_ICN_SYSSYS_CONNECTOR_ST1

//<#!@READ-ONLY-SECTION-END@!#>