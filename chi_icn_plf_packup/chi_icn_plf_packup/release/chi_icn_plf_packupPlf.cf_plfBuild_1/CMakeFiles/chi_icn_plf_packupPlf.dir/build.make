# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Produce verbose output by default.
VERBOSE = 1

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/netura/cof-pack/cmake-3.23.1-linux-x86_64/bin/cmake

# The command to remove a file.
RM = /home/netura/cof-pack/cmake-3.23.1-linux-x86_64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/chi_icn_plf_packup/release/chi_icn_plf_packupPlf.cf_plfBuild_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/chi_icn_plf_packup/release/chi_icn_plf_packupPlf.cf_plfBuild_1

# Include any dependencies generated for this target.
include CMakeFiles/chi_icn_plf_packupPlf.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/chi_icn_plf_packupPlf.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/chi_icn_plf_packupPlf.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/chi_icn_plf_packupPlf.dir/flags.make

CMakeFiles/chi_icn_plf_packupPlf.dir/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/memory.cpp.o: CMakeFiles/chi_icn_plf_packupPlf.dir/flags.make
CMakeFiles/chi_icn_plf_packupPlf.dir/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/memory.cpp.o: /home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/memory.cpp
CMakeFiles/chi_icn_plf_packupPlf.dir/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/memory.cpp.o: CMakeFiles/chi_icn_plf_packupPlf.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/chi_icn_plf_packup/release/chi_icn_plf_packupPlf.cf_plfBuild_1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/chi_icn_plf_packupPlf.dir/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/memory.cpp.o"
	//usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/chi_icn_plf_packupPlf.dir/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/memory.cpp.o -MF CMakeFiles/chi_icn_plf_packupPlf.dir/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/memory.cpp.o.d -o CMakeFiles/chi_icn_plf_packupPlf.dir/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/memory.cpp.o -c /home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/memory.cpp

CMakeFiles/chi_icn_plf_packupPlf.dir/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/memory.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chi_icn_plf_packupPlf.dir/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/memory.cpp.i"
	//usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/memory.cpp > CMakeFiles/chi_icn_plf_packupPlf.dir/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/memory.cpp.i

CMakeFiles/chi_icn_plf_packupPlf.dir/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/memory.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chi_icn_plf_packupPlf.dir/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/memory.cpp.s"
	//usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/memory.cpp -o CMakeFiles/chi_icn_plf_packupPlf.dir/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/memory.cpp.s

CMakeFiles/chi_icn_plf_packupPlf.dir/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/utils_chi.cpp.o: CMakeFiles/chi_icn_plf_packupPlf.dir/flags.make
CMakeFiles/chi_icn_plf_packupPlf.dir/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/utils_chi.cpp.o: /home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/utils_chi.cpp
CMakeFiles/chi_icn_plf_packupPlf.dir/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/utils_chi.cpp.o: CMakeFiles/chi_icn_plf_packupPlf.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/chi_icn_plf_packup/release/chi_icn_plf_packupPlf.cf_plfBuild_1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/chi_icn_plf_packupPlf.dir/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/utils_chi.cpp.o"
	//usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/chi_icn_plf_packupPlf.dir/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/utils_chi.cpp.o -MF CMakeFiles/chi_icn_plf_packupPlf.dir/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/utils_chi.cpp.o.d -o CMakeFiles/chi_icn_plf_packupPlf.dir/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/utils_chi.cpp.o -c /home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/utils_chi.cpp

CMakeFiles/chi_icn_plf_packupPlf.dir/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/utils_chi.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chi_icn_plf_packupPlf.dir/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/utils_chi.cpp.i"
	//usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/utils_chi.cpp > CMakeFiles/chi_icn_plf_packupPlf.dir/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/utils_chi.cpp.i

CMakeFiles/chi_icn_plf_packupPlf.dir/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/utils_chi.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chi_icn_plf_packupPlf.dir/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/utils_chi.cpp.s"
	//usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/utils_chi.cpp -o CMakeFiles/chi_icn_plf_packupPlf.dir/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/utils_chi.cpp.s

# Object files for target chi_icn_plf_packupPlf
chi_icn_plf_packupPlf_OBJECTS = \
"CMakeFiles/chi_icn_plf_packupPlf.dir/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/memory.cpp.o" \
"CMakeFiles/chi_icn_plf_packupPlf.dir/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/utils_chi.cpp.o"

# External object files for target chi_icn_plf_packupPlf
chi_icn_plf_packupPlf_EXTERNAL_OBJECTS =

chi_icn_plf_packupPlf.exe: CMakeFiles/chi_icn_plf_packupPlf.dir/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/memory.cpp.o
chi_icn_plf_packupPlf.exe: CMakeFiles/chi_icn_plf_packupPlf.dir/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/external/src/utils_chi.cpp.o
chi_icn_plf_packupPlf.exe: CMakeFiles/chi_icn_plf_packupPlf.dir/build.make
chi_icn_plf_packupPlf.exe: CMakeFiles/chi_icn_plf_packupPlf.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/chi_icn_plf_packup/release/chi_icn_plf_packupPlf.cf_plfBuild_1/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable chi_icn_plf_packupPlf.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/chi_icn_plf_packupPlf.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/chi_icn_plf_packupPlf.dir/build: chi_icn_plf_packupPlf.exe
.PHONY : CMakeFiles/chi_icn_plf_packupPlf.dir/build

CMakeFiles/chi_icn_plf_packupPlf.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/chi_icn_plf_packupPlf.dir/cmake_clean.cmake
.PHONY : CMakeFiles/chi_icn_plf_packupPlf.dir/clean

CMakeFiles/chi_icn_plf_packupPlf.dir/depend:
	cd /home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/chi_icn_plf_packup/release/chi_icn_plf_packupPlf.cf_plfBuild_1 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/chi_icn_plf_packup/release/chi_icn_plf_packupPlf.cf_plfBuild_1 /home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/chi_icn_plf_packup/release/chi_icn_plf_packupPlf.cf_plfBuild_1 /home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/chi_icn_plf_packup/release/chi_icn_plf_packupPlf.cf_plfBuild_1 /home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/chi_icn_plf_packup/release/chi_icn_plf_packupPlf.cf_plfBuild_1 /home/netura/cof-workspace/cofluent_soc_plf_tlm/chi_icn_plf_packup/chi_icn_plf_packup/release/chi_icn_plf_packupPlf.cf_plfBuild_1/CMakeFiles/chi_icn_plf_packupPlf.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/chi_icn_plf_packupPlf.dir/depend
