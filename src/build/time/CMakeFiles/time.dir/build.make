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
include time/CMakeFiles/time.dir/depend.make

# Include the progress variables for this target.
include time/CMakeFiles/time.dir/progress.make

# Include the compile flags for this target's objects.
include time/CMakeFiles/time.dir/flags.make

time/CMakeFiles/time.dir/src/main.cpp.o: time/CMakeFiles/time.dir/flags.make
time/CMakeFiles/time.dir/src/main.cpp.o: ../time/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/psf/Home/Desktop/work/cplusplus/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object time/CMakeFiles/time.dir/src/main.cpp.o"
	cd /media/psf/Home/Desktop/work/cplusplus/build/time && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/time.dir/src/main.cpp.o -c /media/psf/Home/Desktop/work/cplusplus/time/src/main.cpp

time/CMakeFiles/time.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/time.dir/src/main.cpp.i"
	cd /media/psf/Home/Desktop/work/cplusplus/build/time && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/psf/Home/Desktop/work/cplusplus/time/src/main.cpp > CMakeFiles/time.dir/src/main.cpp.i

time/CMakeFiles/time.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/time.dir/src/main.cpp.s"
	cd /media/psf/Home/Desktop/work/cplusplus/build/time && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/psf/Home/Desktop/work/cplusplus/time/src/main.cpp -o CMakeFiles/time.dir/src/main.cpp.s

# Object files for target time
time_OBJECTS = \
"CMakeFiles/time.dir/src/main.cpp.o"

# External object files for target time
time_EXTERNAL_OBJECTS =

time/time: time/CMakeFiles/time.dir/src/main.cpp.o
time/time: time/CMakeFiles/time.dir/build.make
time/time: utils/libutils_debug.so
time/time: /usr/local/lib/libglog.so.0.7.0
time/time: /usr/local/lib/libgmock.a
time/time: /usr/local/lib/libgtest.a
time/time: time/CMakeFiles/time.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/psf/Home/Desktop/work/cplusplus/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable time"
	cd /media/psf/Home/Desktop/work/cplusplus/build/time && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/time.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
time/CMakeFiles/time.dir/build: time/time

.PHONY : time/CMakeFiles/time.dir/build

time/CMakeFiles/time.dir/clean:
	cd /media/psf/Home/Desktop/work/cplusplus/build/time && $(CMAKE_COMMAND) -P CMakeFiles/time.dir/cmake_clean.cmake
.PHONY : time/CMakeFiles/time.dir/clean

time/CMakeFiles/time.dir/depend:
	cd /media/psf/Home/Desktop/work/cplusplus/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/psf/Home/Desktop/work/cplusplus /media/psf/Home/Desktop/work/cplusplus/time /media/psf/Home/Desktop/work/cplusplus/build /media/psf/Home/Desktop/work/cplusplus/build/time /media/psf/Home/Desktop/work/cplusplus/build/time/CMakeFiles/time.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : time/CMakeFiles/time.dir/depend
