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
include VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/depend.make

# Include the progress variables for this target.
include VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/progress.make

# Include the compile flags for this target's objects.
include VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/flags.make

VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_reader.cpp.o: VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/flags.make
VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_reader.cpp.o: /home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/jsoncpp/vtkjsoncpp/json_reader.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mpas/Desktop/Source/PV/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_reader.cpp.o"
	cd /home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/jsoncpp/vtkjsoncpp && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/vtkjsoncpp.dir/json_reader.cpp.o -c /home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/jsoncpp/vtkjsoncpp/json_reader.cpp

VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_reader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vtkjsoncpp.dir/json_reader.cpp.i"
	cd /home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/jsoncpp/vtkjsoncpp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/jsoncpp/vtkjsoncpp/json_reader.cpp > CMakeFiles/vtkjsoncpp.dir/json_reader.cpp.i

VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_reader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vtkjsoncpp.dir/json_reader.cpp.s"
	cd /home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/jsoncpp/vtkjsoncpp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/jsoncpp/vtkjsoncpp/json_reader.cpp -o CMakeFiles/vtkjsoncpp.dir/json_reader.cpp.s

VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_reader.cpp.o.requires:
.PHONY : VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_reader.cpp.o.requires

VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_reader.cpp.o.provides: VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_reader.cpp.o.requires
	$(MAKE) -f VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/build.make VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_reader.cpp.o.provides.build
.PHONY : VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_reader.cpp.o.provides

VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_reader.cpp.o.provides.build: VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_reader.cpp.o

VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_value.cpp.o: VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/flags.make
VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_value.cpp.o: /home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/jsoncpp/vtkjsoncpp/json_value.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mpas/Desktop/Source/PV/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_value.cpp.o"
	cd /home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/jsoncpp/vtkjsoncpp && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/vtkjsoncpp.dir/json_value.cpp.o -c /home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/jsoncpp/vtkjsoncpp/json_value.cpp

VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_value.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vtkjsoncpp.dir/json_value.cpp.i"
	cd /home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/jsoncpp/vtkjsoncpp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/jsoncpp/vtkjsoncpp/json_value.cpp > CMakeFiles/vtkjsoncpp.dir/json_value.cpp.i

VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_value.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vtkjsoncpp.dir/json_value.cpp.s"
	cd /home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/jsoncpp/vtkjsoncpp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/jsoncpp/vtkjsoncpp/json_value.cpp -o CMakeFiles/vtkjsoncpp.dir/json_value.cpp.s

VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_value.cpp.o.requires:
.PHONY : VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_value.cpp.o.requires

VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_value.cpp.o.provides: VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_value.cpp.o.requires
	$(MAKE) -f VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/build.make VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_value.cpp.o.provides.build
.PHONY : VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_value.cpp.o.provides

VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_value.cpp.o.provides.build: VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_value.cpp.o

VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_writer.cpp.o: VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/flags.make
VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_writer.cpp.o: /home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/jsoncpp/vtkjsoncpp/json_writer.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/mpas/Desktop/Source/PV/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_writer.cpp.o"
	cd /home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/jsoncpp/vtkjsoncpp && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/vtkjsoncpp.dir/json_writer.cpp.o -c /home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/jsoncpp/vtkjsoncpp/json_writer.cpp

VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_writer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vtkjsoncpp.dir/json_writer.cpp.i"
	cd /home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/jsoncpp/vtkjsoncpp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/jsoncpp/vtkjsoncpp/json_writer.cpp > CMakeFiles/vtkjsoncpp.dir/json_writer.cpp.i

VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_writer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vtkjsoncpp.dir/json_writer.cpp.s"
	cd /home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/jsoncpp/vtkjsoncpp && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/jsoncpp/vtkjsoncpp/json_writer.cpp -o CMakeFiles/vtkjsoncpp.dir/json_writer.cpp.s

VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_writer.cpp.o.requires:
.PHONY : VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_writer.cpp.o.requires

VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_writer.cpp.o.provides: VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_writer.cpp.o.requires
	$(MAKE) -f VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/build.make VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_writer.cpp.o.provides.build
.PHONY : VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_writer.cpp.o.provides

VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_writer.cpp.o.provides.build: VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_writer.cpp.o

# Object files for target vtkjsoncpp
vtkjsoncpp_OBJECTS = \
"CMakeFiles/vtkjsoncpp.dir/json_reader.cpp.o" \
"CMakeFiles/vtkjsoncpp.dir/json_value.cpp.o" \
"CMakeFiles/vtkjsoncpp.dir/json_writer.cpp.o"

# External object files for target vtkjsoncpp
vtkjsoncpp_EXTERNAL_OBJECTS =

lib/libvtkjsoncpp-pv4.3.a: VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_reader.cpp.o
lib/libvtkjsoncpp-pv4.3.a: VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_value.cpp.o
lib/libvtkjsoncpp-pv4.3.a: VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_writer.cpp.o
lib/libvtkjsoncpp-pv4.3.a: VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/build.make
lib/libvtkjsoncpp-pv4.3.a: VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library ../../../../lib/libvtkjsoncpp-pv4.3.a"
	cd /home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/jsoncpp/vtkjsoncpp && $(CMAKE_COMMAND) -P CMakeFiles/vtkjsoncpp.dir/cmake_clean_target.cmake
	cd /home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/jsoncpp/vtkjsoncpp && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vtkjsoncpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/build: lib/libvtkjsoncpp-pv4.3.a
.PHONY : VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/build

VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/requires: VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_reader.cpp.o.requires
VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/requires: VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_value.cpp.o.requires
VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/requires: VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/json_writer.cpp.o.requires
.PHONY : VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/requires

VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/clean:
	cd /home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/jsoncpp/vtkjsoncpp && $(CMAKE_COMMAND) -P CMakeFiles/vtkjsoncpp.dir/cmake_clean.cmake
.PHONY : VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/clean

VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/depend:
	cd /home/mpas/Desktop/Source/PV/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mpas/Desktop/Source/PV/ParaView /home/mpas/Desktop/Source/PV/ParaView/VTK/ThirdParty/jsoncpp/vtkjsoncpp /home/mpas/Desktop/Source/PV/build /home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/jsoncpp/vtkjsoncpp /home/mpas/Desktop/Source/PV/build/VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : VTK/ThirdParty/jsoncpp/vtkjsoncpp/CMakeFiles/vtkjsoncpp.dir/depend

