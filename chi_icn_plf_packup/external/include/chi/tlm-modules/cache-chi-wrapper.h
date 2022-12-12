#include "cache-chi.h"
#include "cofluent.h"

class cache_chi_wrapper : public cf_core::cf_processor 
{
public:
    cache_chi<0, 256, 20> cache;

    cache_chi_wrapper(sc_module_name name);
};