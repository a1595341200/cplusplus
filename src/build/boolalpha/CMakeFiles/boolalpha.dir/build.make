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
include boolalpha/CMakeFiles/boolalpha.dir/depend.make

# Include the progress variables for this target.
include boolalpha/CMakeFiles/boolalpha.dir/progress.make

# Include the compile flags for this target's objects.
include boolalpha/CMakeFiles/boolalpha.dir/flags.make

boolalpha/CMakeFiles/boolalpha.dir/src/main.cpp.o: boolalpha/CMakeFiles/boolalpha.dir/flags.make
boolalpha/CMakeFiles/boolalpha.dir/src/main.cpp.o: ../boolalpha/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/psf/Home/Desktop/work/cplusplus/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object boolalpha/CMakeFiles/boolalpha.dir/src/main.cpp.o"
	cd /media/psf/Home/Desktop/work/cplusplus/build/boolalpha && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/boolalpha.dir/src/main.cpp.o -c /media/psf/Home/Desktop/work/cplusplus/boolalpha/src/main.cpp

boolalpha/CMakeFiles/boolalpha.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/boolalpha.dir/src/main.cpp.i"
	cd /media/psf/Home/Desktop/work/cplusplus/build/boolalpha && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/psf/Home/Desktop/work/cplusplus/boolalpha/src/main.cpp > CMakeFiles/boolalpha.dir/src/main.cpp.i

boolalpha/CMakeFiles/boolalpha.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/boolalpha.dir/src/main.cpp.s"
	cd /media/psf/Home/Desktop/work/cplusplus/build/boolalpha && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/psf/Home/Desktop/work/cplusplus/boolalpha/src/main.cpp -o CMakeFiles/boolalpha.dir/src/main.cpp.s

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
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/psf/Home/Desktop/work/cplusplus/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable boolalpha"
	cd /media/psf/Home/Desktop/work/cplusplus/build/boolalpha && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/boolalpha.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
boolalpha/CMakeFiles/boolalpha.dir/build: boolalpha/boolalpha

.PHONY : boolalpha/CMakeFiles/boolalpha.dir/build

boolalpha/CMakeFiles/boolalpha.dir/clean:
	cd /media/psf/Home/Desktop/work/cplusplus/build/boolalpha && $(CMAKE_COMMAND) -P CMakeFiles/boolalpha.dir/cmake_clean.cmake
.PHONY : boolalpha/CMakeFiles/boolalpha.dir/clean

boolalpha/CMakeFiles/boolalpha.dir/depend:
	cd /media/psf/Home/Desktop/work/cplusplus/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/psf/Home/Desktop/work/cplusplus /media/psf/Home/Desktop/work/cplusplus/boolalpha /media/psf/Home/Desktop/work/cplusplus/build /media/psf/Home/Desktop/work/cplusplus/build/boolalpha /media/psf/Home/Desktop/work/cplusplus/build/boolalpha/CMakeFiles/boolalpha.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : boolalpha/CMakeFiles/boolalpha.dir/depend
