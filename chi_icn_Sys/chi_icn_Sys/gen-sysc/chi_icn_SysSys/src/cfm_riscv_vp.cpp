//<#!@READ-ONLY-SECTION-START@!#>
/*
 * \class cfm_riscv_vp
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of chi_icn_SysSys generated by C++ Generator for SystemC/TLM2
 */
/// Model Source includes start
#include "cfm_riscv_vp.h"
/// Model Source includes end
using namespace std;
using namespace sc_core;
using namespace cf_dt;
using namespace cf_pk;
using namespace cf_core;

//<#!@READ-ONLY-SECTION-END@!#>
//Start of 'riscv_vp definitions' algorithm generated code

//End of 'riscv_vp definitions' algorithm generated code
//<#!@READ-ONLY-SECTION-START@!#>

/// \name constructor
//@{
cfm_riscv_vp::cfm_riscv_vp(sc_core::sc_module_name name) :
		/*Start of 'Inherited classes call' from riscv_vp's model property generated code*/
		riscv_vp_adapter_wrapper(name)
		/*End of 'Inherited classes call' from riscv_vp's model property generated code*/
		//, p_bus_connector_st1("p_bus_connector_st1")
		{
	cf_processor::init();

	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'riscv_vp constructor' algorithm generated code

	//End of 'riscv_vp constructor' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>

	cf_processor::elab_end();
}
//@}

/// \name destructor
//@{
cfm_riscv_vp::~cfm_riscv_vp(void) {
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'riscv_vp destructor' algorithm generated code

	//End of 'riscv_vp destructor' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}
//@}

/// \name pre-elaboration section
//@{
void cfm_riscv_vp::cb_before_elaboration(void) {
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'riscv_vp pre elaboration' algorithm generated code

	//End of 'riscv_vp pre elaboration' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}
//@}

/// \name initialize attributes
//@{
void cfm_riscv_vp::cb_init_attributes() {

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
void cfm_riscv_vp::cb_init_local_vars(void) {
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'riscv_vp initializations' algorithm generated code

	//End of 'riscv_vp initializations' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}
//@}

/// \name after active callback
//@{
void cfm_riscv_vp::itc_proc_riscv_vp_cb_after_active() {
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'riscv_vp After Active' algorithm generated code

	//End of 'riscv_vp After Active' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}

/// \name after inactive callback
//@{
void cfm_riscv_vp::itc_proc_riscv_vp_cb_after_inactive() {
	//<#!@READ-ONLY-SECTION-END@!#>
	//Start of 'riscv_vp After Inactive' algorithm generated code

	//End of 'riscv_vp After Inactive' algorithm generated code
	//<#!@READ-ONLY-SECTION-START@!#>
}


//<#!@READ-ONLY-SECTION-END@!#>