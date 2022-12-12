//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_chi_icn_plf_packupplf
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of chi_icn_plf_packupPlf generated by C++ Generator for SystemC/TLM2
 */

#ifndef COFS_MODEL_CHI_ICN_PLF_PACKUPPLF_CHI_ICN_PLF_PACKUPPLF
#define COFS_MODEL_CHI_ICN_PLF_PACKUPPLF_CHI_ICN_PLF_PACKUPPLF

/// Model Header includes start

#include "cfm_chi_icn_plf_packupplf_global.h"
#include "cfm_chi_icn_plf_packupplf_global_types.h"
#include "cofluent.h"

#include "cfm_bridge_rn.h"
#include "cfm_chi_icn_tlm.h"
#include "cfm_connector_st1.h"
#include "cfm_connector_st2.h"
#include "cfm_mem_tlm.h"
#include "cfm_riscv_vp.h"
#include "cfm_sn_tlm.h"

//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'chi_icn_plf_packupPlf includes' algorithm generated code

//End of 'chi_icn_plf_packupPlf includes' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>
/// Model Header includes end

///    \defgroup dxgchi_icn_plf_packupPlf Function chi_icn_plf_packupPlf
//@{
///        \page dxpchi_icn_plf_packupPlf
//@{
///    \brief chi_icn_plf_packupPlf function model start
class cfm_chi_icn_plf_packupplf: public cf_core::cf_platform {
public:
	/// cfm_chi_icn_plf_packupplf type define start
	/// relations typedef

	/// cfm_chi_icn_plf_packupplf type define end

	/// constructor
	cfm_chi_icn_plf_packupplf(sc_core::sc_module_name name);

	/// destructor
	virtual ~cfm_chi_icn_plf_packupplf(void);
	virtual void cb_before_elaboration(void);

public:
	/// \name components
	//@{
	cfm_bridge_rn* bridge_rn;
	cfm_mem_tlm* mem_tlm;
	cfm_riscv_vp* riscv_vp;
	cfm_sn_tlm* sn_tlm;
	//@}

protected:
	/// initialize attributes
	void cb_init_attributes(void);
	/// initialize definitions
	void cb_init_local_vars(void);

public:
	/// \name relations
	//@{
	cfm_chi_icn_tlm bus_CHI_ICN_TLM;
	cfm_connector_st1 bus_connector_st1;
	cfm_connector_st2 bus_connector_st2;
	//@}

	/// Model private fields start
	/// Model private fields end

	/// \name user-defined local declarations
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'chi_icn_plf_packupPlf local declarations' algorithm generated code

	//End of 'chi_icn_plf_packupPlf local declarations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

};
///    \brief chi_icn_plf_packupPlf function model end

//@}
//@}
#endif // COFS_MODEL_CHI_ICN_PLF_PACKUPPLF_CHI_ICN_PLF_PACKUPPLF

//<#!@READ-ONLY-SECTION-END@!#>