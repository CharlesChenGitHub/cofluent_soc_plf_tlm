//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_riscv_vp_rnf_tlm
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of chi_icn_SysSys generated by C++ Generator for SystemC/TLM2
 */

#ifndef COFS_MODEL_CHI_ICN_SYSSYS_RISCV_VP_RNF_TLM
#define COFS_MODEL_CHI_ICN_SYSSYS_RISCV_VP_RNF_TLM

/// Model Header includes start
#include "cfm_chi_icn_syssys_global.h"
#include "cfm_chi_icn_syssys_global_types.h"
#include "cofluent.h"

//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'rnf_tlm includes' algorithm generated code

//End of 'rnf_tlm includes' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>
/// Model Header includes end

///    \defgroup dxgrnf_tlm Function rnf_tlm
//@{
///        \page dxprnf_tlm
//@{
///    \brief rnf_tlm function model start
class cfm_riscv_vp_rnf_tlm: public cf_core::cf_master_interface {
public:
	/// cfm_riscv_vp_rnf_tlm type define start

	/// cfm_riscv_vp_rnf_tlm type define end

	/// constructor
	cfm_riscv_vp_rnf_tlm(sc_core::sc_module_name name);

	/// destructor
	virtual ~cfm_riscv_vp_rnf_tlm(void);
	virtual void cb_before_elaboration(void);

	/// before write component callback
	void itc_cb_before_write_component(const cf_core::cf_payload_b & _trans);
	/// before write interconnect callback
	void itc_cb_before_write_interconnect(
			const tlm::tlm_generic_payload & _trans);
	/// after write component callback
	void itc_cb_after_write_component(const cf_core::cf_payload_b & _trans);
	/// after write interconnect callback
	void itc_cb_after_write_interconnect(
			const tlm::tlm_generic_payload & _trans);
	/// before read component callback
	void itc_cb_before_read_component(const cf_core::cf_payload_b & _trans);
	/// before read interconnect callback
	void itc_cb_before_read_interconnect(
			const tlm::tlm_generic_payload & _trans);
	/// after read component callback
	void itc_cb_after_read_component(const cf_core::cf_payload_b & _trans);
	/// after read interconnect callback
	void itc_cb_after_read_interconnect(
			const tlm::tlm_generic_payload & _trans);

protected:
	/// initialize attributes
	void cb_init_attributes(void);
	/// initialize definitions
	void cb_init_local_vars(void);

	/// Model private fields start
	/// Model private fields end

	/// \name user-defined local declarations
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'rnf_tlm local declarations' algorithm generated code

	//End of 'rnf_tlm local declarations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

};
///    \brief rnf_tlm function model end

//@}
//@}
#endif // COFS_MODEL_CHI_ICN_SYSSYS_RISCV_VP_RNF_TLM

//<#!@READ-ONLY-SECTION-END@!#>