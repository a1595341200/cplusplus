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
include atomic/CMakeFiles/atomic.dir/depend.make

# Include the progress variables for this target.
include atomic/CMakeFiles/atomic.dir/progress.make

# Include the compile flags for this target's objects.
include atomic/CMakeFiles/atomic.dir/flags.make

atomic/CMakeFiles/atomic.dir/src/main.cpp.o: atomic/CMakeFiles/atomic.dir/flags.make
atomic/CMakeFiles/atomic.dir/src/main.cpp.o: ../atomic/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object atomic/CMakeFiles/atomic.dir/src/main.cpp.o"
	cd /tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/atomic && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/atomic.dir/src/main.cpp.o -c /tmp/tmp.fhqj6AkBPz/atomic/src/main.cpp

atomic/CMakeFiles/atomic.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/atomic.dir/src/main.cpp.i"
	cd /tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/atomic && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/tmp.fhqj6AkBPz/atomic/src/main.cpp > CMakeFiles/atomic.dir/src/main.cpp.i

atomic/CMakeFiles/atomic.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/atomic.dir/src/main.cpp.s"
	cd /tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/atomic && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/tmp.fhqj6AkBPz/atomic/src/main.cpp -o CMakeFiles/atomic.dir/src/main.cpp.s

# Object files for target atomic
atomic_OBJECTS = \
"CMakeFiles/atomic.dir/src/main.cpp.o"

# External object files for target atomic
atomic_EXTERNAL_OBJECTS =

atomic/atomic: atomic/CMakeFiles/atomic.dir/src/main.cpp.o
atomic/atomic: atomic/CMakeFiles/atomic.dir/build.make
atomic/atomic: utils/libutils_debug.so
atomic/atomic: /usr/local/lib/libglog.so.0.7.0
atomic/atomic: /usr/local/lib/libgmock.a
atomic/atomic: /usr/local/lib/libgtest.a
atomic/atomic: atomic/CMakeFiles/atomic.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable atomic"
	cd /tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/atomic && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/atomic.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
atomic/CMakeFiles/atomic.dir/build: atomic/atomic

.PHONY : atomic/CMakeFiles/atomic.dir/build

atomic/CMakeFiles/atomic.dir/clean:
	cd /tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/atomic && $(CMAKE_COMMAND) -P CMakeFiles/atomic.dir/cmake_clean.cmake
.PHONY : atomic/CMakeFiles/atomic.dir/clean

atomic/CMakeFiles/atomic.dir/depend:
	cd /tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /tmp/tmp.fhqj6AkBPz /tmp/tmp.fhqj6AkBPz/atomic /tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux /tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/atomic /tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/atomic/CMakeFiles/atomic.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : atomic/CMakeFiles/atomic.dir/depend

