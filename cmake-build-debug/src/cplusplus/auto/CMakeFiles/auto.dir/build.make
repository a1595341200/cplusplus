# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/xieyao/work/cplusplus

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/xieyao/work/cplusplus/cmake-build-debug

# Include any dependencies generated for this target.
include src/cplusplus/auto/CMakeFiles/auto.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/cplusplus/auto/CMakeFiles/auto.dir/compiler_depend.make

# Include the progress variables for this target.
include src/cplusplus/auto/CMakeFiles/auto.dir/progress.make

# Include the compile flags for this target's objects.
include src/cplusplus/auto/CMakeFiles/auto.dir/flags.make

src/cplusplus/auto/CMakeFiles/auto.dir/src/main.cpp.o: src/cplusplus/auto/CMakeFiles/auto.dir/flags.make
src/cplusplus/auto/CMakeFiles/auto.dir/src/main.cpp.o: /Users/xieyao/work/cplusplus/src/cplusplus/auto/src/main.cpp
src/cplusplus/auto/CMakeFiles/auto.dir/src/main.cpp.o: src/cplusplus/auto/CMakeFiles/auto.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/xieyao/work/cplusplus/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/cplusplus/auto/CMakeFiles/auto.dir/src/main.cpp.o"
	cd /Users/xieyao/work/cplusplus/cmake-build-debug/src/cplusplus/auto && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/cplusplus/auto/CMakeFiles/auto.dir/src/main.cpp.o -MF CMakeFiles/auto.dir/src/main.cpp.o.d -o CMakeFiles/auto.dir/src/main.cpp.o -c /Users/xieyao/work/cplusplus/src/cplusplus/auto/src/main.cpp

src/cplusplus/auto/CMakeFiles/auto.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/auto.dir/src/main.cpp.i"
	cd /Users/xieyao/work/cplusplus/cmake-build-debug/src/cplusplus/auto && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/xieyao/work/cplusplus/src/cplusplus/auto/src/main.cpp > CMakeFiles/auto.dir/src/main.cpp.i

src/cplusplus/auto/CMakeFiles/auto.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/auto.dir/src/main.cpp.s"
	cd /Users/xieyao/work/cplusplus/cmake-build-debug/src/cplusplus/auto && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/xieyao/work/cplusplus/src/cplusplus/auto/src/main.cpp -o CMakeFiles/auto.dir/src/main.cpp.s

# Object files for target auto
auto_OBJECTS = \
"CMakeFiles/auto.dir/src/main.cpp.o"

# External object files for target auto
auto_EXTERNAL_OBJECTS =

src/cplusplus/auto/auto: src/cplusplus/auto/CMakeFiles/auto.dir/src/main.cpp.o
src/cplusplus/auto/auto: src/cplusplus/auto/CMakeFiles/auto.dir/build.make
src/cplusplus/auto/auto: utils/libutils_debug.dylib
src/cplusplus/auto/auto: /opt/homebrew/lib/libglog.0.6.0.dylib
src/cplusplus/auto/auto: /opt/homebrew/lib/libgflags.2.2.2.dylib
src/cplusplus/auto/auto: /opt/homebrew/lib/libgmock.a
src/cplusplus/auto/auto: /opt/homebrew/lib/libgtest.a
src/cplusplus/auto/auto: /Users/xieyao/vcpkg/installed/arm64-osx/debug/lib/libprotobufd.a
src/cplusplus/auto/auto: /opt/homebrew/lib/libboost_system-mt.dylib
src/cplusplus/auto/auto: /opt/homebrew/lib/libboost_filesystem-mt.dylib
src/cplusplus/auto/auto: /opt/homebrew/lib/libboost_atomic-mt.dylib
src/cplusplus/auto/auto: /opt/homebrew/lib/libboost_thread-mt.dylib
src/cplusplus/auto/auto: /Users/xieyao/vcpkg/installed/arm64-osx/debug/lib/libevent_extrad.a
src/cplusplus/auto/auto: /Users/xieyao/vcpkg/installed/arm64-osx/debug/lib/libevent_pthreadsd.a
src/cplusplus/auto/auto: /Users/xieyao/vcpkg/installed/arm64-osx/debug/lib/libevent_cored.a
src/cplusplus/auto/auto: src/cplusplus/auto/CMakeFiles/auto.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/xieyao/work/cplusplus/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable auto"
	cd /Users/xieyao/work/cplusplus/cmake-build-debug/src/cplusplus/auto && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/auto.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/cplusplus/auto/CMakeFiles/auto.dir/build: src/cplusplus/auto/auto
.PHONY : src/cplusplus/auto/CMakeFiles/auto.dir/build

src/cplusplus/auto/CMakeFiles/auto.dir/clean:
	cd /Users/xieyao/work/cplusplus/cmake-build-debug/src/cplusplus/auto && $(CMAKE_COMMAND) -P CMakeFiles/auto.dir/cmake_clean.cmake
.PHONY : src/cplusplus/auto/CMakeFiles/auto.dir/clean

src/cplusplus/auto/CMakeFiles/auto.dir/depend:
	cd /Users/xieyao/work/cplusplus/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/xieyao/work/cplusplus /Users/xieyao/work/cplusplus/src/cplusplus/auto /Users/xieyao/work/cplusplus/cmake-build-debug /Users/xieyao/work/cplusplus/cmake-build-debug/src/cplusplus/auto /Users/xieyao/work/cplusplus/cmake-build-debug/src/cplusplus/auto/CMakeFiles/auto.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/cplusplus/auto/CMakeFiles/auto.dir/depend

