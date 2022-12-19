#include "riscv_vp_adapter.h"

class riscv_vp_adapter_wrapper : public cf_core::cf_processor 
{
public:
    riscv_vp::RiscvVpAdapter adapter;

    riscv_vp_adapter_wrapper(sc_core::sc_module_name name):
        cf_processor("riscv_vp_adapter_wrapper"),
        adapter()
        {cout<<"build adapter"<<endl;}
};