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
CMAKE_SOURCE_DIR = /media/psf/Home/Desktop/work/cplusplus

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /media/psf/Home/Desktop/work/cplusplus/build

# Include any dependencies generated for this target.
include backtrace/CMakeFiles/backtrace.dir/depend.make

# Include the progress variables for this target.
include backtrace/CMakeFiles/backtrace.dir/progress.make

# Include the compile flags for this target's objects.
include backtrace/CMakeFiles/backtrace.dir/flags.make

backtrace/CMakeFiles/backtrace.dir/src/main.cpp.o: backtrace/CMakeFiles/backtrace.dir/flags.make
backtrace/CMakeFiles/backtrace.dir/src/main.cpp.o: ../backtrace/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/psf/Home/Desktop/work/cplusplus/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object backtrace/CMakeFiles/backtrace.dir/src/main.cpp.o"
	cd /media/psf/Home/Desktop/work/cplusplus/build/backtrace && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/backtrace.dir/src/main.cpp.o -c /media/psf/Home/Desktop/work/cplusplus/backtrace/src/main.cpp

backtrace/CMakeFiles/backtrace.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/backtrace.dir/src/main.cpp.i"
	cd /media/psf/Home/Desktop/work/cplusplus/build/backtrace && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/psf/Home/Desktop/work/cplusplus/backtrace/src/main.cpp > CMakeFiles/backtrace.dir/src/main.cpp.i

backtrace/CMakeFiles/backtrace.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/backtrace.dir/src/main.cpp.s"
	cd /media/psf/Home/Desktop/work/cplusplus/build/backtrace && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/psf/Home/Desktop/work/cplusplus/backtrace/src/main.cpp -o CMakeFiles/backtrace.dir/src/main.cpp.s

# Object files for target backtrace
backtrace_OBJECTS = \
"CMakeFiles/backtrace.dir/src/main.cpp.o"

# External object files for target backtrace
backtrace_EXTERNAL_OBJECTS =

backtrace/backtrace: backtrace/CMakeFiles/backtrace.dir/src/main.cpp.o
backtrace/backtrace: backtrace/CMakeFiles/backtrace.dir/build.make
backtrace/backtrace: utils/libutils_debug.so
backtrace/backtrace: /usr/local/lib/libglog.so.0.7.0
backtrace/backtrace: /usr/local/lib/libgmock.a
backtrace/backtrace: /usr/local/lib/libgtest.a
backtrace/backtrace: backtrace/CMakeFiles/backtrace.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/psf/Home/Desktop/work/cplusplus/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable backtrace"
	cd /media/psf/Home/Desktop/work/cplusplus/build/backtrace && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/backtrace.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
backtrace/CMakeFiles/backtrace.dir/build: backtrace/backtrace

.PHONY : backtrace/CMakeFiles/backtrace.dir/build

backtrace/CMakeFiles/backtrace.dir/clean:
	cd /media/psf/Home/Desktop/work/cplusplus/build/backtrace && $(CMAKE_COMMAND) -P CMakeFiles/backtrace.dir/cmake_clean.cmake
.PHONY : backtrace/CMakeFiles/backtrace.dir/clean

backtrace/CMakeFiles/backtrace.dir/depend:
	cd /media/psf/Home/Desktop/work/cplusplus/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/psf/Home/Desktop/work/cplusplus /media/psf/Home/Desktop/work/cplusplus/backtrace /media/psf/Home/Desktop/work/cplusplus/build /media/psf/Home/Desktop/work/cplusplus/build/backtrace /media/psf/Home/Desktop/work/cplusplus/build/backtrace/CMakeFiles/backtrace.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : backtrace/CMakeFiles/backtrace.dir/depend

