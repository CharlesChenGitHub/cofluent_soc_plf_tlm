# WARNING Latest build request did not work with this file.
#===============================================================================
#  Intel(R) CoFluent(TM) Studio - Intel Corporation
#  C++ Modeling Library for SystemC/TLM2 (SCL)
#===============================================================================
CMAKE_MINIMUM_REQUIRED(VERSION 2.6)
SET(CMAKE_CXX_COMPILER "//usr/local/bin/g++")
SET(CMAKE_C_COMPILER "//usr/local/bin/g++")
SET(CMAKE_C_COMPILER_FORCED TRUE)
PROJECT(chi_icn_plf_backup)
if (CMAKE_CXX_COMPILER_VERSION VERSION_LESS 7.5)
    message(FATAL_ERROR "GCC version must be at least 7.5.")
else()
    SET(COFS_LIBS_PATH_FOR_GCC "ubuntu-gcc-10.3.0")
endif()

# Options
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11 -O2 -Wall -fmessage-length=100 -frtti -fexceptions -pthread -fpermissive ")
SET(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=gnu++11 -O2 -Wall -fmessage-length=100 -fexceptions -pthread -fpermissive ")
SET(CMAKE_CXX_LINK_FLAGS "${CMAKE_CXX_LINK_FLAGS} -pthread ")


SET(PROJECT_FOLDER "/root/cof-workspace/chi_icn_plf_backup")
SET(COF_SCL_PATH "/root/cof-pack/cof-scl-isim-9.0.2-220617_lic")


SET(CMAKE_VERBOSE_MAKEFILE ON)
# Definitions
add_definitions(-DCOFS_MODEL_TYPE_APPLICATION_MODELING=COFS_MODEL_TYPE_APPLICATION_MODELING)
add_definitions(-DCOFS_SOURCE_CODEGEN_SYSTEMC=COFS_SOURCE_CODEGEN_SYSTEMC)

INCLUDE(
    ListOfSources.cmake
)


# Header directories
INCLUDE_DIRECTORIES(
    "/root/cof-workspace/chi_icn_plf_backup/chi_icn_plf_new/gen-sysc/chi_icn_plf_newPlf/include"
    "/root/cof-workspace/chi_icn_plf_backup/external/include"

    "/root/cof-workspace/chi_icn_plf_backup/external/include/chi"
    "/root/cof-workspace/chi_icn_plf_backup/external/include/chi/test-modules"
    "/root/cof-workspace/chi_icn_plf_backup/external/include/chi/tlm-modules"
    "/root/cof-workspace/chi_icn_plf_backup/external/include/chi/tlm-bridges"
    "/root/cof-workspace/chi_icn_plf_backup/external/include/chi/tlm-extensions"
    "/root/cof-workspace/chi_icn_plf_backup/external/include/traffic-generators"
    "/root/cof-workspace/chi_icn_plf_backup/external/include/chi/tlm-modules/private/ccix"
    "/root/cof-workspace/chi_icn_plf_backup/external/include/chi/tlm-modules/private/chi"


    "/root/cof-pack/cof-scl-isim-9.0.2-220617_lic/include/cofluent"
    "/root/cof-pack/cof-scl-isim-9.0.2-220617_lic/include/cofluent_isim"
    "/root/cof-pack/cof-scl-isim-9.0.2-220617_lic/include/isim-attrs-interface"
    "/root/cof-pack/cof-scl-isim-9.0.2-220617_lic/include/systemc"
)

# Library directories
LINK_DIRECTORIES(
    "/root/cof-workspace/chi_icn_plf_backup/external/lib"
    "/root/cof-pack/cof-scl-isim-9.0.2-220617_lic/lib/${COFS_LIBS_PATH_FOR_GCC}"
    "/root/cof-pack/cof-scl-isim-9.0.2-220617_lic/lib"
)

aux_source_directory("/root/cof-workspace/chi_icn_plf_backup/chi_icn_plf_new/gen-sysc/chi_icn_plf_newPlf/src" COFS_SOURCES)
aux_source_directory("/root/cof-workspace/chi_icn_plf_backup/external/src" COFS_SOURCES)

#message(${COFS_SOURCES})

# Library directories
ADD_EXECUTABLE(
	chi_icn_plf_backup
	${COFS_SOURCES}
)

# Library linked
TARGET_LINK_LIBRARIES(
	chi_icn_plf_backup
	cofscl
    systemc
    coflm
    #ws2_32
    #lmgr11
)

SET_TARGET_PROPERTIES(chi_icn_plf_backup PROPERTIES SUFFIX ".exe")

SET(EXECUTABLE_OUTPUT_PATH ".")