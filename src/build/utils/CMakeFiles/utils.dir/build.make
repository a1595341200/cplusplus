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
include utils/CMakeFiles/utils.dir/depend.make

# Include the progress variables for this target.
include utils/CMakeFiles/utils.dir/progress.make

# Include the compile flags for this target's objects.
include utils/CMakeFiles/utils.dir/flags.make

utils/CMakeFiles/utils.dir/src/Log.cpp.o: utils/CMakeFiles/utils.dir/flags.make
utils/CMakeFiles/utils.dir/src/Log.cpp.o: ../utils/src/Log.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/psf/Home/Desktop/work/cplusplus/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object utils/CMakeFiles/utils.dir/src/Log.cpp.o"
	cd /media/psf/Home/Desktop/work/cplusplus/build/utils && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/utils.dir/src/Log.cpp.o -c /media/psf/Home/Desktop/work/cplusplus/utils/src/Log.cpp

utils/CMakeFiles/utils.dir/src/Log.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/utils.dir/src/Log.cpp.i"
	cd /media/psf/Home/Desktop/work/cplusplus/build/utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/psf/Home/Desktop/work/cplusplus/utils/src/Log.cpp > CMakeFiles/utils.dir/src/Log.cpp.i

utils/CMakeFiles/utils.dir/src/Log.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/utils.dir/src/Log.cpp.s"
	cd /media/psf/Home/Desktop/work/cplusplus/build/utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/psf/Home/Desktop/work/cplusplus/utils/src/Log.cpp -o CMakeFiles/utils.dir/src/Log.cpp.s

utils/CMakeFiles/utils.dir/src/Timer.cpp.o: utils/CMakeFiles/utils.dir/flags.make
utils/CMakeFiles/utils.dir/src/Timer.cpp.o: ../utils/src/Timer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/psf/Home/Desktop/work/cplusplus/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object utils/CMakeFiles/utils.dir/src/Timer.cpp.o"
	cd /media/psf/Home/Desktop/work/cplusplus/build/utils && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/utils.dir/src/Timer.cpp.o -c /media/psf/Home/Desktop/work/cplusplus/utils/src/Timer.cpp

utils/CMakeFiles/utils.dir/src/Timer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/utils.dir/src/Timer.cpp.i"
	cd /media/psf/Home/Desktop/work/cplusplus/build/utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/psf/Home/Desktop/work/cplusplus/utils/src/Timer.cpp > CMakeFiles/utils.dir/src/Timer.cpp.i

utils/CMakeFiles/utils.dir/src/Timer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/utils.dir/src/Timer.cpp.s"
	cd /media/psf/Home/Desktop/work/cplusplus/build/utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/psf/Home/Desktop/work/cplusplus/utils/src/Timer.cpp -o CMakeFiles/utils.dir/src/Timer.cpp.s

utils/CMakeFiles/utils.dir/src/Utils.cpp.o: utils/CMakeFiles/utils.dir/flags.make
utils/CMakeFiles/utils.dir/src/Utils.cpp.o: ../utils/src/Utils.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/psf/Home/Desktop/work/cplusplus/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object utils/CMakeFiles/utils.dir/src/Utils.cpp.o"
	cd /media/psf/Home/Desktop/work/cplusplus/build/utils && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/utils.dir/src/Utils.cpp.o -c /media/psf/Home/Desktop/work/cplusplus/utils/src/Utils.cpp

utils/CMakeFiles/utils.dir/src/Utils.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/utils.dir/src/Utils.cpp.i"
	cd /media/psf/Home/Desktop/work/cplusplus/build/utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/psf/Home/Desktop/work/cplusplus/utils/src/Utils.cpp > CMakeFiles/utils.dir/src/Utils.cpp.i

utils/CMakeFiles/utils.dir/src/Utils.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/utils.dir/src/Utils.cpp.s"
	cd /media/psf/Home/Desktop/work/cplusplus/build/utils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/psf/Home/Desktop/work/cplusplus/utils/src/Utils.cpp -o CMakeFiles/utils.dir/src/Utils.cpp.s

# Object files for target utils
utils_OBJECTS = \
"CMakeFiles/utils.dir/src/Log.cpp.o" \
"CMakeFiles/utils.dir/src/Timer.cpp.o" \
"CMakeFiles/utils.dir/src/Utils.cpp.o"

# External object files for target utils
utils_EXTERNAL_OBJECTS =

utils/libutils_debug.so: utils/CMakeFiles/utils.dir/src/Log.cpp.o
utils/libutils_debug.so: utils/CMakeFiles/utils.dir/src/Timer.cpp.o
utils/libutils_debug.so: utils/CMakeFiles/utils.dir/src/Utils.cpp.o
utils/libutils_debug.so: utils/CMakeFiles/utils.dir/build.make
utils/libutils_debug.so: /usr/local/lib/libglog.so.0.7.0
utils/libutils_debug.so: /usr/local/lib/libgtest.a
utils/libutils_debug.so: /usr/local/lib/libgmock.a
utils/libutils_debug.so: /usr/local/lib/libgtest.a
utils/libutils_debug.so: utils/CMakeFiles/utils.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/psf/Home/Desktop/work/cplusplus/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX shared library libutils_debug.so"
	cd /media/psf/Home/Desktop/work/cplusplus/build/utils && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/utils.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
utils/CMakeFiles/utils.dir/build: utils/libutils_debug.so

.PHONY : utils/CMakeFiles/utils.dir/build

utils/CMakeFiles/utils.dir/clean:
	cd /media/psf/Home/Desktop/work/cplusplus/build/utils && $(CMAKE_COMMAND) -P CMakeFiles/utils.dir/cmake_clean.cmake
.PHONY : utils/CMakeFiles/utils.dir/clean

utils/CMakeFiles/utils.dir/depend:
	cd /media/psf/Home/Desktop/work/cplusplus/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/psf/Home/Desktop/work/cplusplus /media/psf/Home/Desktop/work/cplusplus/utils /media/psf/Home/Desktop/work/cplusplus/build /media/psf/Home/Desktop/work/cplusplus/build/utils /media/psf/Home/Desktop/work/cplusplus/build/utils/CMakeFiles/utils.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : utils/CMakeFiles/utils.dir/depend

