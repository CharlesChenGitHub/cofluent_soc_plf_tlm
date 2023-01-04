//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_chi_icn_tlm
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of chi_icn_sysSys generated by C++ Generator for SystemC/TLM2
 */

#ifndef COFS_MODEL_CHI_ICN_SYSSYS_CHI_ICN_TLM
#define COFS_MODEL_CHI_ICN_SYSSYS_CHI_ICN_TLM

#include "cofluent.h"
/*Start of 'Inherited classes header' from CHI_ICN_TLM property generated code*/
#include "iconnect-chi.h"
/*End of 'Inherited classes header' from CHI_ICN_TLM property generated code*/
//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'CHI_ICN_TLM includes' algorithm generated code
#define comma ,
//End of 'CHI_ICN_TLM includes' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>

///    \defgroup dxgCHI_ICN_TLM Function CHI_ICN_TLM
//@{
///        \page dxpCHI_ICN_TLM
//@{
///    \brief CHI_ICN_TLM function model.
class cfm_chi_icn_tlm:
/*Start of 'Inherited classes declaration' from CHI_ICN_TLM property generated code*/
public iconnect_chi<20 comma 10 comma 2 comma 0>
/*End of 'Inherited classes declaration' from CHI_ICN_TLM property generated code*/
{
public:
	/// constructor
	cfm_chi_icn_tlm(sc_core::sc_module_name name);

	/// destructor
	virtual ~cfm_chi_icn_tlm(void);

	/// before arbitration callback
	void itc_bus_CHI_ICN_TLM_cb_before_arbitration(
			const tlm::tlm_generic_payload & _trans);

	/// after arbitration callback
	void itc_bus_CHI_ICN_TLM_cb_after_arbitration(
			const tlm::tlm_generic_payload & _trans);

	/// before transfer callback
	void itc_bus_CHI_ICN_TLM_cb_before_transfer(
			const tlm::tlm_generic_payload & _trans);

	/// after transfer callback
	void itc_bus_CHI_ICN_TLM_cb_after_transfer(
			const tlm::tlm_generic_payload & _trans);

protected:
	/// initialize definitions
	void cb_init_local_vars(void);

	/// \name user-defined local declarations
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'CHI_ICN_TLM local declarations' algorithm generated code

	//End of 'CHI_ICN_TLM local declarations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

};

//@}
//@}
#endif // COFS_MODEL_CHI_ICN_SYSSYS_CHI_ICN_TLM

//<#!@READ-ONLY-SECTION-END@!#>