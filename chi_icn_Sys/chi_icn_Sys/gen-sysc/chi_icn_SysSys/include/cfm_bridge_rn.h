//<#!@READ-ONLY-SECTION-START@!#>
/*!
 * \class cfm_bridge_rn
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of chi_icn_SysSys generated by C++ Generator for SystemC/TLM2
 */

#ifndef COFS_MODEL_CHI_ICN_SYSSYS_BRIDGE_RN
#define COFS_MODEL_CHI_ICN_SYSSYS_BRIDGE_RN

/// Model Header includes start
#include "cfm_chi_icn_syssys_global.h"
#include "cfm_chi_icn_syssys_global_types.h"
#include "cofluent.h"

/*Start of 'Inherited classes header' from bridge_rn's model property generated code*/
#include "cache-chi-wrapper.h"
/*End of 'Inherited classes header' from bridge_rn's model property generated code*/
//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'bridge_rn includes' algorithm generated code
#define comma ,
//End of 'bridge_rn includes' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>
/// Model Header includes end

///    \defgroup dxgbridge_rn Function bridge_rn
//@{
///        \page dxpbridge_rn
//@{
///    \brief bridge_rn function model start
class cfm_bridge_rn:
/*Start of 'Inherited classes declaration' from bridge_rn's property generated code*/
public cache_chi_wrapper
/*End of 'Inherited classes declaration' from bridge_rn's property generated code*/
{
public:
	/// cfm_bridge_rn type define start

	/// ports typedef
	typedef tlm_utils::multi_passthrough_initiator_socket<cf_core::cf_itc_b> p_bus_connector_st1_t;
	typedef tlm_utils::multi_passthrough_initiator_socket<cf_core::cf_itc_b> p_bus_CHI_ICN_TLM_t;
	/// cfm_bridge_rn type define end

	/// constructor
	cfm_bridge_rn(sc_core::sc_module_name name);

	/// destructor
	virtual ~cfm_bridge_rn(void);
	virtual void cb_before_elaboration(void);

public:
	/// \name input/output ports
	//@{
	/*
	p_bus_connector_st1_t p_bus_connector_st1;
	p_bus_CHI_ICN_TLM_t p_bus_CHI_ICN_TLM;
	*/
	//@}

	/// after active callback
	void itc_proc_bridge_rn_cb_after_active(void);

	/// after inactive callback
	void itc_proc_bridge_rn_cb_after_inactive(void);

protected:
	/// initialize attributes
	void cb_init_attributes(void);
	/// initialize definitions
	void cb_init_local_vars(void);

	/// Model private fields start
	/// Model private fields end

	/// \name user-defined local declarations
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'bridge_rn local declarations' algorithm generated code

	//End of 'bridge_rn local declarations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

};
///    \brief bridge_rn function model end

//@}
//@}
#endif // COFS_MODEL_CHI_ICN_SYSSYS_BRIDGE_RN

//<#!@READ-ONLY-SECTION-END@!#>