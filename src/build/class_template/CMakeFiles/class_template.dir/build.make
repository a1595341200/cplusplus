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
include class_template/CMakeFiles/class_template.dir/depend.make

# Include the progress variables for this target.
include class_template/CMakeFiles/class_template.dir/progress.make

# Include the compile flags for this target's objects.
include class_template/CMakeFiles/class_template.dir/flags.make

class_template/CMakeFiles/class_template.dir/src/main.cpp.o: class_template/CMakeFiles/class_template.dir/flags.make
class_template/CMakeFiles/class_template.dir/src/main.cpp.o: ../class_template/src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/media/psf/Home/Desktop/work/cplusplus/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object class_template/CMakeFiles/class_template.dir/src/main.cpp.o"
	cd /media/psf/Home/Desktop/work/cplusplus/build/class_template && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/class_template.dir/src/main.cpp.o -c /media/psf/Home/Desktop/work/cplusplus/class_template/src/main.cpp

class_template/CMakeFiles/class_template.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/class_template.dir/src/main.cpp.i"
	cd /media/psf/Home/Desktop/work/cplusplus/build/class_template && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /media/psf/Home/Desktop/work/cplusplus/class_template/src/main.cpp > CMakeFiles/class_template.dir/src/main.cpp.i

class_template/CMakeFiles/class_template.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/class_template.dir/src/main.cpp.s"
	cd /media/psf/Home/Desktop/work/cplusplus/build/class_template && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /media/psf/Home/Desktop/work/cplusplus/class_template/src/main.cpp -o CMakeFiles/class_template.dir/src/main.cpp.s

# Object files for target class_template
class_template_OBJECTS = \
"CMakeFiles/class_template.dir/src/main.cpp.o"

# External object files for target class_template
class_template_EXTERNAL_OBJECTS =

class_template/class_template: class_template/CMakeFiles/class_template.dir/src/main.cpp.o
class_template/class_template: class_template/CMakeFiles/class_template.dir/build.make
class_template/class_template: utils/libutils_debug.so
class_template/class_template: /usr/local/lib/libglog.so.0.7.0
class_template/class_template: /usr/local/lib/libgmock.a
class_template/class_template: /usr/local/lib/libgtest.a
class_template/class_template: class_template/CMakeFiles/class_template.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/media/psf/Home/Desktop/work/cplusplus/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable class_template"
	cd /media/psf/Home/Desktop/work/cplusplus/build/class_template && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/class_template.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
class_template/CMakeFiles/class_template.dir/build: class_template/class_template

.PHONY : class_template/CMakeFiles/class_template.dir/build

class_template/CMakeFiles/class_template.dir/clean:
	cd /media/psf/Home/Desktop/work/cplusplus/build/class_template && $(CMAKE_COMMAND) -P CMakeFiles/class_template.dir/cmake_clean.cmake
.PHONY : class_template/CMakeFiles/class_template.dir/clean

class_template/CMakeFiles/class_template.dir/depend:
	cd /media/psf/Home/Desktop/work/cplusplus/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /media/psf/Home/Desktop/work/cplusplus /media/psf/Home/Desktop/work/cplusplus/class_template /media/psf/Home/Desktop/work/cplusplus/build /media/psf/Home/Desktop/work/cplusplus/build/class_template /media/psf/Home/Desktop/work/cplusplus/build/class_template/CMakeFiles/class_template.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : class_template/CMakeFiles/class_template.dir/depend
