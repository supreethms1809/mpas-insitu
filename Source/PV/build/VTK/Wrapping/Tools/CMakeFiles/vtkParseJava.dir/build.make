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
CMAKE_SOURCE_DIR = /home/mpas/Desktop/Source/PV/ParaView

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mpas/Desktop/Source/PV/build

# Include any dependencies generated for this target.
include VTK/Wrapping/Tools/CMakeFiles/vtkParseJava.dir/depend.make

# Include the progress variables for this target.
include VTK/Wrapping/Tools/CMakeFiles/vtkParseJava.dir/progress.make

# Include the compile flags for this target's objects.
include VTK/Wrapping/Tools/CMakeFiles/vtkParseJava.dir/flags.make

VTK/Wrapping/Tools/CMakeFiles/vtkParseJava.dir/vtkParseJava.c.o: VTK/Wrapping/Tools/CMakeFiles/vtkParseJava.dir/flags.make
VTK/Wrapping/Tools/CMakeFiles/vtkParseJava.dir/vtkParseJava.c.o: /home/mpas/Desktop/Source/PV/ParaView/VTK/Wrapping/Tools/vtkParseJava.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mpas/Desktop/Source/PV/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object VTK/Wrapping/Tools/CMakeFiles/vtkParseJava.dir/vtkParseJava.c.o"
	cd /home/mpas/Desktop/Source/PV/build/VTK/Wrapping/Tools && /usr/bin/mpicc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/vtkParseJava.dir/vtkParseJava.c.o   -c /home/mpas/Desktop/Source/PV/ParaView/VTK/Wrapping/Tools/vtkParseJava.c

VTK/Wrapping/Tools/CMakeFiles/vtkParseJava.dir/vtkParseJava.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/vtkParseJava.dir/vtkParseJava.c.i"
	cd /home/mpas/Desktop/Source/PV/build/VTK/Wrapping/Tools && /usr/bin/mpicc  $(C_DEFINES) $(C_FLAGS) -E /home/mpas/Desktop/Source/PV/ParaView/VTK/Wrapping/Tools/vtkParseJava.c > CMakeFiles/vtkParseJava.dir/vtkParseJava.c.i

VTK/Wrapping/Tools/CMakeFiles/vtkParseJava.dir/vtkParseJava.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/vtkParseJava.dir/vtkParseJava.c.s"
	cd /home/mpas/Desktop/Source/PV/build/VTK/Wrapping/Tools && /usr/bin/mpicc  $(C_DEFINES) $(C_FLAGS) -S /home/mpas/Desktop/Source/PV/ParaView/VTK/Wrapping/Tools/vtkParseJava.c -o CMakeFiles/vtkParseJava.dir/vtkParseJava.c.s

VTK/Wrapping/Tools/CMakeFiles/vtkParseJava.dir/vtkParseJava.c.o.requires:
.PHONY : VTK/Wrapping/Tools/CMakeFiles/vtkParseJava.dir/vtkParseJava.c.o.requires

VTK/Wrapping/Tools/CMakeFiles/vtkParseJava.dir/vtkParseJava.c.o.provides: VTK/Wrapping/Tools/CMakeFiles/vtkParseJava.dir/vtkParseJava.c.o.requires
	$(MAKE) -f VTK/Wrapping/Tools/CMakeFiles/vtkParseJava.dir/build.make VTK/Wrapping/Tools/CMakeFiles/vtkParseJava.dir/vtkParseJava.c.o.provides.build
.PHONY : VTK/Wrapping/Tools/CMakeFiles/vtkParseJava.dir/vtkParseJava.c.o.provides

VTK/Wrapping/Tools/CMakeFiles/vtkParseJava.dir/vtkParseJava.c.o.provides.build: VTK/Wrapping/Tools/CMakeFiles/vtkParseJava.dir/vtkParseJava.c.o

# Object files for target vtkParseJava
vtkParseJava_OBJECTS = \
"CMakeFiles/vtkParseJava.dir/vtkParseJava.c.o"

# External object files for target vtkParseJava
vtkParseJava_EXTERNAL_OBJECTS =

bin/vtkParseJava-pv4.3: VTK/Wrapping/Tools/CMakeFiles/vtkParseJava.dir/vtkParseJava.c.o
bin/vtkParseJava-pv4.3: VTK/Wrapping/Tools/CMakeFiles/vtkParseJava.dir/build.make
bin/vtkParseJava-pv4.3: lib/libvtkWrappingTools-pv4.3.a
bin/vtkParseJava-pv4.3: VTK/Wrapping/Tools/CMakeFiles/vtkParseJava.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking C executable ../../../bin/vtkParseJava-pv4.3"
	cd /home/mpas/Desktop/Source/PV/build/VTK/Wrapping/Tools && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vtkParseJava.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
VTK/Wrapping/Tools/CMakeFiles/vtkParseJava.dir/build: bin/vtkParseJava-pv4.3
.PHONY : VTK/Wrapping/Tools/CMakeFiles/vtkParseJava.dir/build

VTK/Wrapping/Tools/CMakeFiles/vtkParseJava.dir/requires: VTK/Wrapping/Tools/CMakeFiles/vtkParseJava.dir/vtkParseJava.c.o.requires
.PHONY : VTK/Wrapping/Tools/CMakeFiles/vtkParseJava.dir/requires

VTK/Wrapping/Tools/CMakeFiles/vtkParseJava.dir/clean:
	cd /home/mpas/Desktop/Source/PV/build/VTK/Wrapping/Tools && $(CMAKE_COMMAND) -P CMakeFiles/vtkParseJava.dir/cmake_clean.cmake
.PHONY : VTK/Wrapping/Tools/CMakeFiles/vtkParseJava.dir/clean

VTK/Wrapping/Tools/CMakeFiles/vtkParseJava.dir/depend:
	cd /home/mpas/Desktop/Source/PV/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mpas/Desktop/Source/PV/ParaView /home/mpas/Desktop/Source/PV/ParaView/VTK/Wrapping/Tools /home/mpas/Desktop/Source/PV/build /home/mpas/Desktop/Source/PV/build/VTK/Wrapping/Tools /home/mpas/Desktop/Source/PV/build/VTK/Wrapping/Tools/CMakeFiles/vtkParseJava.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : VTK/Wrapping/Tools/CMakeFiles/vtkParseJava.dir/depend

