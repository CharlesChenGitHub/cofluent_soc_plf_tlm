//<#!@READ-ONLY-SECTION-START@!#>
/*
 * \class cfm_tg_rnf
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of chi_icn_plf_packupPlf generated by C++ Generator for SystemC/TLM2
 */
/// Model Source includes start
#include "cfm_tg_rnf.h"
/// Model Source includes end
using namespace std;
using namespace sc_core;
using namespace cf_dt;
using namespace cf_pk;
using namespace cf_core;

//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'tg_rnf definitions' algorithm generated code

//End of 'tg_rnf definitions' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>

/// \name constructor
//@{
cfm_tg_rnf::cfm_tg_rnf(sc_core::sc_module_name name) :
		/*Start of 'Inherited classes call' from tg_rnf's model property generated code*/
		rnf_subsys(name)
/*End of 'Inherited classes call' from tg_rnf's model property generated code*/
/*, p_bus_CHI_ICN("p_bus_CHI_ICN")*/
{
	cf_processor::init();

	/*MI = new cfm_tg_rnf_mi
	 ("MI");*/

	// connections
	//CHI_ICN is not streaming connection 
	/*			 	    MI->p_initiator_socket
	 (p_bus_CHI_ICN
	 );
	 */

	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'tg_rnf constructor' algorithm generated code
	//End of 'tg_rnf constructor' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

	cf_processor::elab_end();
}
//@}

/// \name destructor
//@{
cfm_tg_rnf::~cfm_tg_rnf(void) {
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'tg_rnf destructor' algorithm generated code

	//End of 'tg_rnf destructor' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
//delete MI;
}
//@}

/// \name pre-elaboration section
//@{
void cfm_tg_rnf::cb_before_elaboration(void) {
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'tg_rnf pre elaboration' algorithm generated code

	//End of 'tg_rnf pre elaboration' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}
//@}

/// \name initialize attributes
//@{
void cfm_tg_rnf::cb_init_attributes() {

// initialize processor attributes
	cfa_speed_up_ratio.init(cf_factor(1));
	cfa_cost.init(cf_cost(1, CF_USD));
	cfa_available_memory.init(cf_data_size(1, CF_MBYTE));
	cfa_static_load.init(cf_resource_load(0, CF_PERCENT));

	return;
}
//@}

/// \name initialize definitions
//@{
void cfm_tg_rnf::cb_init_local_vars(void) {
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'tg_rnf initializations' algorithm generated code

	//End of 'tg_rnf initializations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}
//@}

/// \name after active callback
//@{
void cfm_tg_rnf::itc_proc_tg_rnf_cb_after_active() {
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'tg_rnf After Active' algorithm generated code

	//End of 'tg_rnf After Active' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}

/// \name after inactive callback
//@{
void cfm_tg_rnf::itc_proc_tg_rnf_cb_after_inactive() {
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'tg_rnf After Inactive' algorithm generated code

	//End of 'tg_rnf After Inactive' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}


//<#!@READ-ONLY-SECTION-END@!#>