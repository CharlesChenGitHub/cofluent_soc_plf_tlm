#include "tlm-modules/cache-chi-wrapper.h"


cache_chi_wrapper::cache_chi_wrapper(sc_module_name name):
        cf_processor("cache_chi_wrapper"), 
        //   0x000055555576c2cd <+61>:    call   0x5555557e5d80 <_ZN7cf_core12cf_processorC2EN7sc_core14sc_module_nameE>
        //=> 0x00005555557e5db5 <+53>:    call   0x5555557e7830 <_ZN7cf_core14cf_processor_bC2EN7sc_core14sc_module_nameENS_17cf_component_enumE>
        //=> 0x00005555557e78d1 <_ZN7cf_core14cf_processor_bC2EN7sc_core14sc_module_nameENS_17cf_component_enumE+161>:    e8 5a 57 f9 ff  call   0x55555577d030 <_ZN7cf_core12cf_componentC2EPN7sc_core9sc_objectERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEENS_17cf_component_enumE>
        //=> 0x000055555577d679 <_ZN7cf_core12cf_componentC2EPN7sc_core9sc_objectERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEENS_17cf_component_enumE+1609>:    e8 02 15 0b 00    call   0x55555582eb80 <_ZN7cf_core9cf_verifyEbRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEjPKcz>
        //=> 0x000055555582ecbf <_ZN7cf_core9cf_verifyEbRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEjPKcz+319>: e8 ac fb ff ff  call   0x55555582e870 <_ZN7cf_core31_cf_control_exit_with_exceptionERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEjNS_17cf_log_level_enumEPKcRA1_13__va_list_tag>
        cache(name) //   0x000055555576c36a <+218>:   call   0x55555576fe90 <_ZN9cache_chiILi0ELi256ELi20EEC2EN7sc_core14sc_module_nameE>
        {
        };