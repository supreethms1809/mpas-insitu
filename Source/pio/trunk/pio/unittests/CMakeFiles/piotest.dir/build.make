# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mpas/Desktop/Source/pio/trunk

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mpas/Desktop/Source/pio/trunk

# Include any dependencies generated for this target.
include pio/unittests/CMakeFiles/piotest.dir/depend.make

# Include the progress variables for this target.
include pio/unittests/CMakeFiles/piotest.dir/progress.make

# Include the compile flags for this target's objects.
include pio/unittests/CMakeFiles/piotest.dir/flags.make

pio/unittests/CMakeFiles/piotest.dir/basic_tests.F90.o: pio/unittests/CMakeFiles/piotest.dir/flags.make
pio/unittests/CMakeFiles/piotest.dir/basic_tests.F90.o: unittests/basic_tests.F90
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mpas/Desktop/Source/pio/trunk/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building Fortran object pio/unittests/CMakeFiles/piotest.dir/basic_tests.F90.o"
	cd /home/mpas/Desktop/Source/pio/trunk/pio/unittests && /usr/bin/mpif90  $(Fortran_DEFINES) $(Fortran_FLAGS) -c /home/mpas/Desktop/Source/pio/trunk/unittests/basic_tests.F90 -o CMakeFiles/piotest.dir/basic_tests.F90.o

pio/unittests/CMakeFiles/piotest.dir/basic_tests.F90.o.requires:
.PHONY : pio/unittests/CMakeFiles/piotest.dir/basic_tests.F90.o.requires

pio/unittests/CMakeFiles/piotest.dir/basic_tests.F90.o.provides: pio/unittests/CMakeFiles/piotest.dir/basic_tests.F90.o.requires
	$(MAKE) -f pio/unittests/CMakeFiles/piotest.dir/build.make pio/unittests/CMakeFiles/piotest.dir/basic_tests.F90.o.provides.build
.PHONY : pio/unittests/CMakeFiles/piotest.dir/basic_tests.F90.o.provides

pio/unittests/CMakeFiles/piotest.dir/basic_tests.F90.o.provides.build: pio/unittests/CMakeFiles/piotest.dir/basic_tests.F90.o

pio/unittests/CMakeFiles/piotest.dir/driver.F90.o: pio/unittests/CMakeFiles/piotest.dir/flags.make
pio/unittests/CMakeFiles/piotest.dir/driver.F90.o: unittests/driver.F90
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mpas/Desktop/Source/pio/trunk/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building Fortran object pio/unittests/CMakeFiles/piotest.dir/driver.F90.o"
	cd /home/mpas/Desktop/Source/pio/trunk/pio/unittests && /usr/bin/mpif90  $(Fortran_DEFINES) $(Fortran_FLAGS) -c /home/mpas/Desktop/Source/pio/trunk/unittests/driver.F90 -o CMakeFiles/piotest.dir/driver.F90.o

pio/unittests/CMakeFiles/piotest.dir/driver.F90.o.requires:
.PHONY : pio/unittests/CMakeFiles/piotest.dir/driver.F90.o.requires

pio/unittests/CMakeFiles/piotest.dir/driver.F90.o.provides: pio/unittests/CMakeFiles/piotest.dir/driver.F90.o.requires
	$(MAKE) -f pio/unittests/CMakeFiles/piotest.dir/build.make pio/unittests/CMakeFiles/piotest.dir/driver.F90.o.provides.build
.PHONY : pio/unittests/CMakeFiles/piotest.dir/driver.F90.o.provides

pio/unittests/CMakeFiles/piotest.dir/driver.F90.o.provides.build: pio/unittests/CMakeFiles/piotest.dir/driver.F90.o

pio/unittests/CMakeFiles/piotest.dir/global_vars.F90.o: pio/unittests/CMakeFiles/piotest.dir/flags.make
pio/unittests/CMakeFiles/piotest.dir/global_vars.F90.o: unittests/global_vars.F90
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mpas/Desktop/Source/pio/trunk/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building Fortran object pio/unittests/CMakeFiles/piotest.dir/global_vars.F90.o"
	cd /home/mpas/Desktop/Source/pio/trunk/pio/unittests && /usr/bin/mpif90  $(Fortran_DEFINES) $(Fortran_FLAGS) -c /home/mpas/Desktop/Source/pio/trunk/unittests/global_vars.F90 -o CMakeFiles/piotest.dir/global_vars.F90.o

pio/unittests/CMakeFiles/piotest.dir/global_vars.F90.o.requires:
.PHONY : pio/unittests/CMakeFiles/piotest.dir/global_vars.F90.o.requires

pio/unittests/CMakeFiles/piotest.dir/global_vars.F90.o.provides: pio/unittests/CMakeFiles/piotest.dir/global_vars.F90.o.requires
	$(MAKE) -f pio/unittests/CMakeFiles/piotest.dir/build.make pio/unittests/CMakeFiles/piotest.dir/global_vars.F90.o.provides.build
.PHONY : pio/unittests/CMakeFiles/piotest.dir/global_vars.F90.o.provides

pio/unittests/CMakeFiles/piotest.dir/global_vars.F90.o.provides.build: pio/unittests/CMakeFiles/piotest.dir/global_vars.F90.o

pio/unittests/CMakeFiles/piotest.dir/ncdf_tests.F90.o: pio/unittests/CMakeFiles/piotest.dir/flags.make
pio/unittests/CMakeFiles/piotest.dir/ncdf_tests.F90.o: unittests/ncdf_tests.F90
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mpas/Desktop/Source/pio/trunk/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building Fortran object pio/unittests/CMakeFiles/piotest.dir/ncdf_tests.F90.o"
	cd /home/mpas/Desktop/Source/pio/trunk/pio/unittests && /usr/bin/mpif90  $(Fortran_DEFINES) $(Fortran_FLAGS) -c /home/mpas/Desktop/Source/pio/trunk/unittests/ncdf_tests.F90 -o CMakeFiles/piotest.dir/ncdf_tests.F90.o

pio/unittests/CMakeFiles/piotest.dir/ncdf_tests.F90.o.requires:
.PHONY : pio/unittests/CMakeFiles/piotest.dir/ncdf_tests.F90.o.requires

pio/unittests/CMakeFiles/piotest.dir/ncdf_tests.F90.o.provides: pio/unittests/CMakeFiles/piotest.dir/ncdf_tests.F90.o.requires
	$(MAKE) -f pio/unittests/CMakeFiles/piotest.dir/build.make pio/unittests/CMakeFiles/piotest.dir/ncdf_tests.F90.o.provides.build
.PHONY : pio/unittests/CMakeFiles/piotest.dir/ncdf_tests.F90.o.provides

pio/unittests/CMakeFiles/piotest.dir/ncdf_tests.F90.o.provides.build: pio/unittests/CMakeFiles/piotest.dir/ncdf_tests.F90.o

pio/unittests/CMakeFiles/piotest.dir/nc_set_log_level2.c.o: pio/unittests/CMakeFiles/piotest.dir/flags.make
pio/unittests/CMakeFiles/piotest.dir/nc_set_log_level2.c.o: unittests/nc_set_log_level2.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mpas/Desktop/Source/pio/trunk/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object pio/unittests/CMakeFiles/piotest.dir/nc_set_log_level2.c.o"
	cd /home/mpas/Desktop/Source/pio/trunk/pio/unittests && /usr/bin/mpicc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/piotest.dir/nc_set_log_level2.c.o   -c /home/mpas/Desktop/Source/pio/trunk/unittests/nc_set_log_level2.c

pio/unittests/CMakeFiles/piotest.dir/nc_set_log_level2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/piotest.dir/nc_set_log_level2.c.i"
	cd /home/mpas/Desktop/Source/pio/trunk/pio/unittests && /usr/bin/mpicc  $(C_DEFINES) $(C_FLAGS) -E /home/mpas/Desktop/Source/pio/trunk/unittests/nc_set_log_level2.c > CMakeFiles/piotest.dir/nc_set_log_level2.c.i

pio/unittests/CMakeFiles/piotest.dir/nc_set_log_level2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/piotest.dir/nc_set_log_level2.c.s"
	cd /home/mpas/Desktop/Source/pio/trunk/pio/unittests && /usr/bin/mpicc  $(C_DEFINES) $(C_FLAGS) -S /home/mpas/Desktop/Source/pio/trunk/unittests/nc_set_log_level2.c -o CMakeFiles/piotest.dir/nc_set_log_level2.c.s

pio/unittests/CMakeFiles/piotest.dir/nc_set_log_level2.c.o.requires:
.PHONY : pio/unittests/CMakeFiles/piotest.dir/nc_set_log_level2.c.o.requires

pio/unittests/CMakeFiles/piotest.dir/nc_set_log_level2.c.o.provides: pio/unittests/CMakeFiles/piotest.dir/nc_set_log_level2.c.o.requires
	$(MAKE) -f pio/unittests/CMakeFiles/piotest.dir/build.make pio/unittests/CMakeFiles/piotest.dir/nc_set_log_level2.c.o.provides.build
.PHONY : pio/unittests/CMakeFiles/piotest.dir/nc_set_log_level2.c.o.provides

pio/unittests/CMakeFiles/piotest.dir/nc_set_log_level2.c.o.provides.build: pio/unittests/CMakeFiles/piotest.dir/nc_set_log_level2.c.o

# Object files for target piotest
piotest_OBJECTS = \
"CMakeFiles/piotest.dir/basic_tests.F90.o" \
"CMakeFiles/piotest.dir/driver.F90.o" \
"CMakeFiles/piotest.dir/global_vars.F90.o" \
"CMakeFiles/piotest.dir/ncdf_tests.F90.o" \
"CMakeFiles/piotest.dir/nc_set_log_level2.c.o"

# External object files for target piotest
piotest_EXTERNAL_OBJECTS =

pio/unittests/piotest: pio/unittests/CMakeFiles/piotest.dir/basic_tests.F90.o
pio/unittests/piotest: pio/unittests/CMakeFiles/piotest.dir/driver.F90.o
pio/unittests/piotest: pio/unittests/CMakeFiles/piotest.dir/global_vars.F90.o
pio/unittests/piotest: pio/unittests/CMakeFiles/piotest.dir/ncdf_tests.F90.o
pio/unittests/piotest: pio/unittests/CMakeFiles/piotest.dir/nc_set_log_level2.c.o
pio/unittests/piotest: pio/unittests/CMakeFiles/piotest.dir/build.make
pio/unittests/piotest: pio/libpio.a
pio/unittests/piotest: /usr/lib/libpnetcdf.a
pio/unittests/piotest: pio/unittests/CMakeFiles/piotest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking Fortran executable piotest"
	cd /home/mpas/Desktop/Source/pio/trunk/pio/unittests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/piotest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
pio/unittests/CMakeFiles/piotest.dir/build: pio/unittests/piotest
.PHONY : pio/unittests/CMakeFiles/piotest.dir/build

pio/unittests/CMakeFiles/piotest.dir/requires: pio/unittests/CMakeFiles/piotest.dir/basic_tests.F90.o.requires
pio/unittests/CMakeFiles/piotest.dir/requires: pio/unittests/CMakeFiles/piotest.dir/driver.F90.o.requires
pio/unittests/CMakeFiles/piotest.dir/requires: pio/unittests/CMakeFiles/piotest.dir/global_vars.F90.o.requires
pio/unittests/CMakeFiles/piotest.dir/requires: pio/unittests/CMakeFiles/piotest.dir/ncdf_tests.F90.o.requires
pio/unittests/CMakeFiles/piotest.dir/requires: pio/unittests/CMakeFiles/piotest.dir/nc_set_log_level2.c.o.requires
.PHONY : pio/unittests/CMakeFiles/piotest.dir/requires

pio/unittests/CMakeFiles/piotest.dir/clean:
	cd /home/mpas/Desktop/Source/pio/trunk/pio/unittests && $(CMAKE_COMMAND) -P CMakeFiles/piotest.dir/cmake_clean.cmake
.PHONY : pio/unittests/CMakeFiles/piotest.dir/clean

pio/unittests/CMakeFiles/piotest.dir/depend:
	cd /home/mpas/Desktop/Source/pio/trunk && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mpas/Desktop/Source/pio/trunk /home/mpas/Desktop/Source/pio/trunk/unittests /home/mpas/Desktop/Source/pio/trunk /home/mpas/Desktop/Source/pio/trunk/pio/unittests /home/mpas/Desktop/Source/pio/trunk/pio/unittests/CMakeFiles/piotest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : pio/unittests/CMakeFiles/piotest.dir/depend

