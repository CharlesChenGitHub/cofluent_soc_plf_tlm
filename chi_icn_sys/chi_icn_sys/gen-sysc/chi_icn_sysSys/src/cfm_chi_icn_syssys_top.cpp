//<#!@READ-ONLY-SECTION-START@!#>
/*
 * \brief Intel(R) CoFluent(TM) Studio - Intel Corporation
 * \details Simulation model of chi_icn_sysSys generated by C++ Generator for SystemC/TLM2
 */

#include "cfm_chi_icn_syssys_top.h"
using namespace std;
using namespace sc_core;
using namespace cf_dt;
using namespace cf_pk;
using namespace cf_core;

#ifdef COFS_MODEL_TYPE_PLATFORM_MODELING
int sc_main(int argc, char *argv[])
{

	// chi_icn_sysSys instantiation
	cfm_chi_icn_syssys* cfmi_chi_icn_sysSys = new cfm_chi_icn_syssys("chi_icn_sysSys");

	// start simulation
	cf_start();

	// shutdown simulator
	cf_stop();
	delete cfmi_chi_icn_sysSys;

	return EXIT_SUCCESS;
}
#endif // COFS_MODEL_TYPE_ARCHITECTURE_MODELING

//<#!@READ-ONLY-SECTION-END@!#>