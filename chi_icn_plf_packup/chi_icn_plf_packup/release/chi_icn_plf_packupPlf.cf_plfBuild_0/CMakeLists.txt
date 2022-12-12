# WARNING Latest build request did not work with this file.
#===============================================================================
#  Intel(R) CoFluent(TM) Studio - Intel Corporation
#  C++ Modeling Library for SystemC/TLM2 (SCL)
#===============================================================================
CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

SET(CMAKE_CXX_COMPILER "//usr/bin/g++")
SET(CMAKE_C_COMPILER "//usr/bin/g++")
SET(CMAKE_C_COMPILER_FORCED TRUE)
PROJECT(chi_icn_plf_packupPlf)
if (CMAKE_CXX_COMPILER_VERSION VERSION_LESS 7.5)
    message(FATAL_ERROR "GCC version must be at least 7.5.")
else()
    SET(COFS_LIBS_PATH_FOR_GCC "ubuntu-gcc-10.3.0")
endif()

# Options
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++14 -O2 -Wall -fmessage-length=100 -frtti -fexceptions -pthread -fpermissive -g")
SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=gnu++14 -O2 -Wall -fmessage-length=100 -fexceptions -pthread -fpermissive -g")
SET(CMAKE_CXX_LINK_FLAGS "${CMAKE_CXX_LINK_FLAGS} -pthread ")

SET(PROJECT_FOLDER "/home/sunjiaqi/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup")
SET(COF_SCL_PATH "/home/sunjiaqi/cof-pack/cof-scl-isim-9.1.0-221024_nolic")


SET(CMAKE_VERBOSE_MAKEFILE ON)
# Definitions
add_definitions(-DCOFS_MODEL_TYPE_APPLICATION_MODELING=COFS_MODEL_TYPE_APPLICATION_MODELING)
add_definitions(-DCOFS_SOURCE_CODEGEN_SYSTEMC=COFS_SOURCE_CODEGEN_SYSTEMC)
add_definitions(-DSC_CPLUSPLUS=201103L)

INCLUDE(
    ListOfSources.cmake
)

find_package(Boost REQUIRED COMPONENTS iostreams)

# Header directories
INCLUDE_DIRECTORIES(
    "/home/sunjiaqi/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/chi_icn_plf_packup/gen-sysc/chi_icn_plf_packupPlf/include"
    "${PROJECT_FOLDER}/external/include"
    "${PROJECT_FOLDER}/external/include/chi"
    "${PROJECT_FOLDER}/external/include/chi/tlm-modules"
    "${PROJECT_FOLDER}/external/include/riscv-vp/rv32"
    "${PROJECT_FOLDER}/external/include/riscv-vp/common"
    "${PROJECT_FOLDER}/external/include/riscv-vp/softfloat-dist/include/softfloat"
    "/home/sunjiaqi/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/include"
    "/home/sunjiaqi/cof-pack/cof-scl-isim-9.1.0-221024_nolic/include/cofluent"
    "/home/sunjiaqi/cof-pack/cof-scl-isim-9.1.0-221024_nolic/include/cofluent_isim"
    "/home/sunjiaqi/cof-pack/cof-scl-isim-9.1.0-221024_nolic/include/isim-attrs-interface"
    "/home/sunjiaqi/cof-pack/cof-scl-isim-9.1.0-221024_nolic/include/systemc"
    ${Boost_INCLUDE_DIRS}
)

# Library directories
LINK_DIRECTORIES(
	"${PROJECT_FOLDER}/external/lib"
    "/home/sunjiaqi/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/lib"
    "/home/sunjiaqi/cof-pack/cof-scl-isim-9.1.0-221024_nolic/lib/${COFS_LIBS_PATH_FOR_GCC}"
    "/home/sunjiaqi/cof-pack/cof-scl-isim-9.1.0-221024_nolic/lib"
    ${Boost_LINK_DIRS}
)

# Library directories
ADD_EXECUTABLE(
	chi_icn_plf_packupPlf
	${COFS_SOURCES}
)

# Library linked
TARGET_LINK_LIBRARIES(
	chi_icn_plf_packupPlf
	cofscl
    systemc
    coflm
    pthread
    stdc++
    dl
    rt
    softfloat
    ${Boost_LIBRARIES}
)

SET_TARGET_PROPERTIES(chi_icn_plf_packupPlf PROPERTIES SUFFIX ".exe")

SET(EXECUTABLE_OUTPUT_PATH ".")
