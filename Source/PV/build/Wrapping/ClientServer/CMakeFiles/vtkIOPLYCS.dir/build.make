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
include Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/depend.make

# Include the progress variables for this target.
include Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/progress.make

# Include the compile flags for this target's objects.
include Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/flags.make

Wrapping/ClientServer/vtkPLYReaderClientServer.cxx: bin/vtkWrapClientServer-pv4.3
Wrapping/ClientServer/vtkPLYReaderClientServer.cxx: /home/mpas/Desktop/Source/PV/ParaView/VTK/Wrapping/Tools/hints
Wrapping/ClientServer/vtkPLYReaderClientServer.cxx: Wrapping/ClientServer/vtkIOPLYCS.args
Wrapping/ClientServer/vtkPLYReaderClientServer.cxx: /home/mpas/Desktop/Source/PV/ParaView/VTK/IO/PLY/vtkPLYReader.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mpas/Desktop/Source/PV/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "CS Wrapping - generating vtkPLYReaderClientServer.cxx"
	cd /home/mpas/Desktop/Source/PV/build/Wrapping/ClientServer && ../../bin/vtkWrapClientServer-pv4.3 @/home/mpas/Desktop/Source/PV/build/Wrapping/ClientServer/vtkIOPLYCS.args -o /home/mpas/Desktop/Source/PV/build/Wrapping/ClientServer/vtkPLYReaderClientServer.cxx /home/mpas/Desktop/Source/PV/ParaView/VTK/IO/PLY/vtkPLYReader.h

Wrapping/ClientServer/vtkPLYWriterClientServer.cxx: bin/vtkWrapClientServer-pv4.3
Wrapping/ClientServer/vtkPLYWriterClientServer.cxx: /home/mpas/Desktop/Source/PV/ParaView/VTK/Wrapping/Tools/hints
Wrapping/ClientServer/vtkPLYWriterClientServer.cxx: Wrapping/ClientServer/vtkIOPLYCS.args
Wrapping/ClientServer/vtkPLYWriterClientServer.cxx: /home/mpas/Desktop/Source/PV/ParaView/VTK/IO/PLY/vtkPLYWriter.h
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mpas/Desktop/Source/PV/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "CS Wrapping - generating vtkPLYWriterClientServer.cxx"
	cd /home/mpas/Desktop/Source/PV/build/Wrapping/ClientServer && ../../bin/vtkWrapClientServer-pv4.3 @/home/mpas/Desktop/Source/PV/build/Wrapping/ClientServer/vtkIOPLYCS.args -o /home/mpas/Desktop/Source/PV/build/Wrapping/ClientServer/vtkPLYWriterClientServer.cxx /home/mpas/Desktop/Source/PV/ParaView/VTK/IO/PLY/vtkPLYWriter.h

Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkPLYReaderClientServer.cxx.o: Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/flags.make
Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkPLYReaderClientServer.cxx.o: Wrapping/ClientServer/vtkPLYReaderClientServer.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mpas/Desktop/Source/PV/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkPLYReaderClientServer.cxx.o"
	cd /home/mpas/Desktop/Source/PV/build/Wrapping/ClientServer && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/vtkIOPLYCS.dir/vtkPLYReaderClientServer.cxx.o -c /home/mpas/Desktop/Source/PV/build/Wrapping/ClientServer/vtkPLYReaderClientServer.cxx

Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkPLYReaderClientServer.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vtkIOPLYCS.dir/vtkPLYReaderClientServer.cxx.i"
	cd /home/mpas/Desktop/Source/PV/build/Wrapping/ClientServer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/mpas/Desktop/Source/PV/build/Wrapping/ClientServer/vtkPLYReaderClientServer.cxx > CMakeFiles/vtkIOPLYCS.dir/vtkPLYReaderClientServer.cxx.i

Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkPLYReaderClientServer.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vtkIOPLYCS.dir/vtkPLYReaderClientServer.cxx.s"
	cd /home/mpas/Desktop/Source/PV/build/Wrapping/ClientServer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/mpas/Desktop/Source/PV/build/Wrapping/ClientServer/vtkPLYReaderClientServer.cxx -o CMakeFiles/vtkIOPLYCS.dir/vtkPLYReaderClientServer.cxx.s

Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkPLYReaderClientServer.cxx.o.requires:
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkPLYReaderClientServer.cxx.o.requires

Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkPLYReaderClientServer.cxx.o.provides: Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkPLYReaderClientServer.cxx.o.requires
	$(MAKE) -f Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/build.make Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkPLYReaderClientServer.cxx.o.provides.build
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkPLYReaderClientServer.cxx.o.provides

Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkPLYReaderClientServer.cxx.o.provides.build: Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkPLYReaderClientServer.cxx.o

Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkPLYWriterClientServer.cxx.o: Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/flags.make
Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkPLYWriterClientServer.cxx.o: Wrapping/ClientServer/vtkPLYWriterClientServer.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mpas/Desktop/Source/PV/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkPLYWriterClientServer.cxx.o"
	cd /home/mpas/Desktop/Source/PV/build/Wrapping/ClientServer && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/vtkIOPLYCS.dir/vtkPLYWriterClientServer.cxx.o -c /home/mpas/Desktop/Source/PV/build/Wrapping/ClientServer/vtkPLYWriterClientServer.cxx

Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkPLYWriterClientServer.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vtkIOPLYCS.dir/vtkPLYWriterClientServer.cxx.i"
	cd /home/mpas/Desktop/Source/PV/build/Wrapping/ClientServer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/mpas/Desktop/Source/PV/build/Wrapping/ClientServer/vtkPLYWriterClientServer.cxx > CMakeFiles/vtkIOPLYCS.dir/vtkPLYWriterClientServer.cxx.i

Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkPLYWriterClientServer.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vtkIOPLYCS.dir/vtkPLYWriterClientServer.cxx.s"
	cd /home/mpas/Desktop/Source/PV/build/Wrapping/ClientServer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/mpas/Desktop/Source/PV/build/Wrapping/ClientServer/vtkPLYWriterClientServer.cxx -o CMakeFiles/vtkIOPLYCS.dir/vtkPLYWriterClientServer.cxx.s

Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkPLYWriterClientServer.cxx.o.requires:
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkPLYWriterClientServer.cxx.o.requires

Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkPLYWriterClientServer.cxx.o.provides: Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkPLYWriterClientServer.cxx.o.requires
	$(MAKE) -f Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/build.make Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkPLYWriterClientServer.cxx.o.provides.build
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkPLYWriterClientServer.cxx.o.provides

Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkPLYWriterClientServer.cxx.o.provides.build: Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkPLYWriterClientServer.cxx.o

Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkIOPLYCSInit.cxx.o: Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/flags.make
Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkIOPLYCSInit.cxx.o: Wrapping/ClientServer/vtkIOPLYCSInit.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mpas/Desktop/Source/PV/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkIOPLYCSInit.cxx.o"
	cd /home/mpas/Desktop/Source/PV/build/Wrapping/ClientServer && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/vtkIOPLYCS.dir/vtkIOPLYCSInit.cxx.o -c /home/mpas/Desktop/Source/PV/build/Wrapping/ClientServer/vtkIOPLYCSInit.cxx

Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkIOPLYCSInit.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vtkIOPLYCS.dir/vtkIOPLYCSInit.cxx.i"
	cd /home/mpas/Desktop/Source/PV/build/Wrapping/ClientServer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/mpas/Desktop/Source/PV/build/Wrapping/ClientServer/vtkIOPLYCSInit.cxx > CMakeFiles/vtkIOPLYCS.dir/vtkIOPLYCSInit.cxx.i

Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkIOPLYCSInit.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vtkIOPLYCS.dir/vtkIOPLYCSInit.cxx.s"
	cd /home/mpas/Desktop/Source/PV/build/Wrapping/ClientServer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/mpas/Desktop/Source/PV/build/Wrapping/ClientServer/vtkIOPLYCSInit.cxx -o CMakeFiles/vtkIOPLYCS.dir/vtkIOPLYCSInit.cxx.s

Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkIOPLYCSInit.cxx.o.requires:
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkIOPLYCSInit.cxx.o.requires

Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkIOPLYCSInit.cxx.o.provides: Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkIOPLYCSInit.cxx.o.requires
	$(MAKE) -f Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/build.make Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkIOPLYCSInit.cxx.o.provides.build
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkIOPLYCSInit.cxx.o.provides

Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkIOPLYCSInit.cxx.o.provides.build: Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkIOPLYCSInit.cxx.o

# Object files for target vtkIOPLYCS
vtkIOPLYCS_OBJECTS = \
"CMakeFiles/vtkIOPLYCS.dir/vtkPLYReaderClientServer.cxx.o" \
"CMakeFiles/vtkIOPLYCS.dir/vtkPLYWriterClientServer.cxx.o" \
"CMakeFiles/vtkIOPLYCS.dir/vtkIOPLYCSInit.cxx.o"

# External object files for target vtkIOPLYCS
vtkIOPLYCS_EXTERNAL_OBJECTS =

lib/libvtkIOPLYCS-pv4.3.a: Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkPLYReaderClientServer.cxx.o
lib/libvtkIOPLYCS-pv4.3.a: Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkPLYWriterClientServer.cxx.o
lib/libvtkIOPLYCS-pv4.3.a: Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkIOPLYCSInit.cxx.o
lib/libvtkIOPLYCS-pv4.3.a: Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/build.make
lib/libvtkIOPLYCS-pv4.3.a: Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library ../../lib/libvtkIOPLYCS-pv4.3.a"
	cd /home/mpas/Desktop/Source/PV/build/Wrapping/ClientServer && $(CMAKE_COMMAND) -P CMakeFiles/vtkIOPLYCS.dir/cmake_clean_target.cmake
	cd /home/mpas/Desktop/Source/PV/build/Wrapping/ClientServer && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vtkIOPLYCS.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/build: lib/libvtkIOPLYCS-pv4.3.a
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/build

Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/requires: Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkPLYReaderClientServer.cxx.o.requires
Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/requires: Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkPLYWriterClientServer.cxx.o.requires
Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/requires: Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/vtkIOPLYCSInit.cxx.o.requires
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/requires

Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/clean:
	cd /home/mpas/Desktop/Source/PV/build/Wrapping/ClientServer && $(CMAKE_COMMAND) -P CMakeFiles/vtkIOPLYCS.dir/cmake_clean.cmake
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/clean

Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/depend: Wrapping/ClientServer/vtkPLYReaderClientServer.cxx
Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/depend: Wrapping/ClientServer/vtkPLYWriterClientServer.cxx
	cd /home/mpas/Desktop/Source/PV/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mpas/Desktop/Source/PV/ParaView /home/mpas/Desktop/Source/PV/ParaView/Wrapping/ClientServer /home/mpas/Desktop/Source/PV/build /home/mpas/Desktop/Source/PV/build/Wrapping/ClientServer /home/mpas/Desktop/Source/PV/build/Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Wrapping/ClientServer/CMakeFiles/vtkIOPLYCS.dir/depend

