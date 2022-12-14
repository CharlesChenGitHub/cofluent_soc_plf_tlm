//<#!@READ-ONLY-SECTION-START@!#>
/*
 * \class cfm_mem_tlm
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of chi_icn_sysSys generated by C++ Generator for SystemC/TLM2
 */
/// Model Source includes start
#include "cfm_mem_tlm.h"
/// Model Source includes end
using namespace std;
using namespace sc_core;
using namespace cf_dt;
using namespace cf_pk;
using namespace cf_core;

//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'mem_tlm definitions' algorithm generated code

//End of 'mem_tlm definitions' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>

/// \name constructor
//@{
cfm_mem_tlm::cfm_mem_tlm(sc_core::sc_module_name name) :
		/*Start of 'Inherited classes call' from mem_tlm's model property generated code*/
		memory(name)
/*End of 'Inherited classes call' from mem_tlm's model property generated code*/
/*, p_bus_connector_st("p_bus_connector_st")*/
{
	cf_processor::init();

	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'mem_tlm constructor' algorithm generated code

	//End of 'mem_tlm constructor' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

	cf_processor::elab_end();
}
//@}

/// \name destructor
//@{
cfm_mem_tlm::~cfm_mem_tlm(void) {
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'mem_tlm destructor' algorithm generated code

	//End of 'mem_tlm destructor' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}
//@}

/// \name pre-elaboration section
//@{
void cfm_mem_tlm::cb_before_elaboration(void) {
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'mem_tlm pre elaboration' algorithm generated code

	//End of 'mem_tlm pre elaboration' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}
//@}

/// \name initialize attributes
//@{
void cfm_mem_tlm::cb_init_attributes() {

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
void cfm_mem_tlm::cb_init_local_vars(void) {
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'mem_tlm initializations' algorithm generated code

	//End of 'mem_tlm initializations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}
//@}

/// \name after active callback
//@{
void cfm_mem_tlm::itc_proc_mem_tlm_cb_after_active() {
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'mem_tlm After Active' algorithm generated code

	//End of 'mem_tlm After Active' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}

/// \name after inactive callback
//@{
void cfm_mem_tlm::itc_proc_mem_tlm_cb_after_inactive() {
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'mem_tlm After Inactive' algorithm generated code

	//End of 'mem_tlm After Inactive' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}


//<#!@READ-ONLY-SECTION-END@!#>