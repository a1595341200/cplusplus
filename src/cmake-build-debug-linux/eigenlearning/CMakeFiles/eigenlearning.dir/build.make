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
include eigenlearning/CMakeFiles/eigenlearning.dir/depend.make

# Include the progress variables for this target.
include eigenlearning/CMakeFiles/eigenlearning.dir/progress.make

# Include the compile flags for this target's objects.
include eigenlearning/CMakeFiles/eigenlearning.dir/flags.make

eigenlearning/CMakeFiles/eigenlearning.dir/src/main.cpp.o: eigenlearning/CMakeFiles/eigenlearning.dir/flags.make
eigenlearning/CMakeFiles/eigenlearning.dir/src/main.cpp.o: ../eigenlearning/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object eigenlearning/CMakeFiles/eigenlearning.dir/src/main.cpp.o"
	cd /tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/eigenlearning && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/eigenlearning.dir/src/main.cpp.o -c /tmp/tmp.fhqj6AkBPz/eigenlearning/src/main.cpp

eigenlearning/CMakeFiles/eigenlearning.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/eigenlearning.dir/src/main.cpp.i"
	cd /tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/eigenlearning && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/tmp.fhqj6AkBPz/eigenlearning/src/main.cpp > CMakeFiles/eigenlearning.dir/src/main.cpp.i

eigenlearning/CMakeFiles/eigenlearning.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/eigenlearning.dir/src/main.cpp.s"
	cd /tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/eigenlearning && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/tmp.fhqj6AkBPz/eigenlearning/src/main.cpp -o CMakeFiles/eigenlearning.dir/src/main.cpp.s

# Object files for target eigenlearning
eigenlearning_OBJECTS = \
"CMakeFiles/eigenlearning.dir/src/main.cpp.o"

# External object files for target eigenlearning
eigenlearning_EXTERNAL_OBJECTS =

eigenlearning/eigenlearning: eigenlearning/CMakeFiles/eigenlearning.dir/src/main.cpp.o
eigenlearning/eigenlearning: eigenlearning/CMakeFiles/eigenlearning.dir/build.make
eigenlearning/eigenlearning: utils/libutils_debug.so
eigenlearning/eigenlearning: /usr/local/lib/libglog.so.0.7.0
eigenlearning/eigenlearning: /usr/local/lib/libgmock.a
eigenlearning/eigenlearning: /usr/local/lib/libgtest.a
eigenlearning/eigenlearning: eigenlearning/CMakeFiles/eigenlearning.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable eigenlearning"
	cd /tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/eigenlearning && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/eigenlearning.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
eigenlearning/CMakeFiles/eigenlearning.dir/build: eigenlearning/eigenlearning

.PHONY : eigenlearning/CMakeFiles/eigenlearning.dir/build

eigenlearning/CMakeFiles/eigenlearning.dir/clean:
	cd /tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/eigenlearning && $(CMAKE_COMMAND) -P CMakeFiles/eigenlearning.dir/cmake_clean.cmake
.PHONY : eigenlearning/CMakeFiles/eigenlearning.dir/clean

eigenlearning/CMakeFiles/eigenlearning.dir/depend:
	cd /tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /tmp/tmp.fhqj6AkBPz /tmp/tmp.fhqj6AkBPz/eigenlearning /tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux /tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/eigenlearning /tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/eigenlearning/CMakeFiles/eigenlearning.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : eigenlearning/CMakeFiles/eigenlearning.dir/depend

