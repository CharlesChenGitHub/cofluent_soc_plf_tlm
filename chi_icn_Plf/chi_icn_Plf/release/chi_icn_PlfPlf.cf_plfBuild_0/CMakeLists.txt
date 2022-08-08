# WARNING Latest build request did not work with this file.
#===============================================================================
#  Intel(R) CoFluent(TM) Studio - Intel Corporation
#  C++ Modeling Library for SystemC/TLM2 (SCL)
#===============================================================================
CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
SET(CMAKE_CXX_COMPILER "//usr/bin/g++")
SET(CMAKE_C_COMPILER "//usr/bin/g++")
SET(CMAKE_C_COMPILER_FORCED TRUE)
PROJECT(chi_icn_plf)
if (CMAKE_CXX_COMPILER_VERSION VERSION_LESS 7.5)
    message(FATAL_ERROR "GCC version must be at least 7.5.")
else()
    SET(COFS_LIBS_PATH_FOR_GCC "ubuntu-gcc-10.3.0")
endif()

# Options
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11 -O2 -Wall -fmessage-length=100 -frtti -fexceptions -pthread -fpermissive ")
SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=gnu++11 -O2 -Wall -fmessage-length=100 -fexceptions -pthread -fpermissive ")
SET(CMAKE_CXX_LINK_FLAGS "${CMAKE_CXX_LINK_FLAGS} -pthread ")


SET(PROJECT_FOLDER "/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_Plf")
SET(COF_SCL_PATH "/home/netura/cof-pack/cof-scl-isim-9.0.2-220706_nolic")


SET(CMAKE_VERBOSE_MAKEFILE ON)
# Definitions
add_definitions(-DCOFS_MODEL_TYPE_APPLICATION_MODELING=COFS_MODEL_TYPE_APPLICATION_MODELING)
add_definitions(-DCOFS_SOURCE_CODEGEN_SYSTEMC=COFS_SOURCE_CODEGEN_SYSTEMC)

INCLUDE(
    ListOfSources.cmake
)


# Header directories
INCLUDE_DIRECTORIES(
    "/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_Plf/chi_icn_Plf/gen-sysc/chi_icn_PlfPlf/include"
    "/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_Plf/external/include"

    "/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_Plf/external/include/chi"
    "/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_Plf/external/include/chi/test-modules"
    "/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_Plf/external/include/chi/tlm-modules"
    "/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_Plf/external/include/chi/tlm-bridges"
    "/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_Plf/external/include/chi/tlm-extensions"
    "/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_Plf/external/include/traffic-generators"
    "/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_Plf/external/include/chi/tlm-modules/private/ccix"
    "/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_Plf/external/include/chi/tlm-modules/private/chi"


    "/root/cof-pack/cof-scl-isim-9.0.2-220706_nolic/include/cofluent"
    "/root/cof-pack/cof-scl-isim-9.0.2-220706_nolic/include/cofluent_isim"
    "/root/cof-pack/cof-scl-isim-9.0.2-220706_nolic/include/isim-attrs-interface"
    "/root/cof-pack/cof-scl-isim-9.0.2-220706_nolic/include/systemc"
)

# Library directories
LINK_DIRECTORIES(
    "/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_Plf/external/lib"
    "/root/cof-pack/cof-scl-isim-9.0.2-220706_nolic/lib/${COFS_LIBS_PATH_FOR_GCC}"
    "/root/cof-pack/cof-scl-isim-9.0.2-220706_nolic/lib"
)

aux_source_directory("/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_Plf/chi_icn_Plf/gen-sysc/chi_icn_PlfPlf/src" COFS_SOURCES)
aux_source_directory("/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_Plf/external/src" COFS_SOURCES)

#message(${COFS_SOURCES})

# Library directories
ADD_EXECUTABLE(
	chi_icn_plf
	${COFS_SOURCES}
)

# Library linked
TARGET_LINK_LIBRARIES(
	chi_icn_plf
	cofscl
    systemc
    coflm
    pthread
    stdc++
    dl
    rt
)


SET_TARGET_PROPERTIES(chi_icn_plf PROPERTIES SUFFIX ".exe")

SET(EXECUTABLE_OUTPUT_PATH ".")