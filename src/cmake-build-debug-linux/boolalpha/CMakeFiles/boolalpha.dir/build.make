# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


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

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /tmp/tmp.fhqj6AkBPz

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux

# Include any dependencies generated for this target.
include boolalpha/CMakeFiles/boolalpha.dir/depend.make

# Include the progress variables for this target.
include boolalpha/CMakeFiles/boolalpha.dir/progress.make

# Include the compile flags for this target's objects.
include boolalpha/CMakeFiles/boolalpha.dir/flags.make

boolalpha/CMakeFiles/boolalpha.dir/src/main.cpp.o: boolalpha/CMakeFiles/boolalpha.dir/flags.make
boolalpha/CMakeFiles/boolalpha.dir/src/main.cpp.o: ../boolalpha/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object boolalpha/CMakeFiles/boolalpha.dir/src/main.cpp.o"
	cd /tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/boolalpha && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/boolalpha.dir/src/main.cpp.o -c /tmp/tmp.fhqj6AkBPz/boolalpha/src/main.cpp

boolalpha/CMakeFiles/boolalpha.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/boolalpha.dir/src/main.cpp.i"
	cd /tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/boolalpha && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/tmp.fhqj6AkBPz/boolalpha/src/main.cpp > CMakeFiles/boolalpha.dir/src/main.cpp.i

boolalpha/CMakeFiles/boolalpha.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/boolalpha.dir/src/main.cpp.s"
	cd /tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/boolalpha && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/tmp.fhqj6AkBPz/boolalpha/src/main.cpp -o CMakeFiles/boolalpha.dir/src/main.cpp.s

# Object files for target boolalpha
boolalpha_OBJECTS = \
"CMakeFiles/boolalpha.dir/src/main.cpp.o"

# External object files for target boolalpha
boolalpha_EXTERNAL_OBJECTS =

boolalpha/boolalpha: boolalpha/CMakeFiles/boolalpha.dir/src/main.cpp.o
boolalpha/boolalpha: boolalpha/CMakeFiles/boolalpha.dir/build.make
boolalpha/boolalpha: utils/libutils_debug.so
boolalpha/boolalpha: /usr/local/lib/libglog.so.0.7.0
boolalpha/boolalpha: /usr/local/lib/libgmock.a
boolalpha/boolalpha: /usr/local/lib/libgtest.a
boolalpha/boolalpha: boolalpha/CMakeFiles/boolalpha.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable boolalpha"
	cd /tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/boolalpha && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/boolalpha.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
boolalpha/CMakeFiles/boolalpha.dir/build: boolalpha/boolalpha

.PHONY : boolalpha/CMakeFiles/boolalpha.dir/build

boolalpha/CMakeFiles/boolalpha.dir/clean:
	cd /tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/boolalpha && $(CMAKE_COMMAND) -P CMakeFiles/boolalpha.dir/cmake_clean.cmake
.PHONY : boolalpha/CMakeFiles/boolalpha.dir/clean

boolalpha/CMakeFiles/boolalpha.dir/depend:
	cd /tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /tmp/tmp.fhqj6AkBPz /tmp/tmp.fhqj6AkBPz/boolalpha /tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux /tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/boolalpha /tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/boolalpha/CMakeFiles/boolalpha.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : boolalpha/CMakeFiles/boolalpha.dir/depend

