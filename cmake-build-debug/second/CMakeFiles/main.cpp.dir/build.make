# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /home/mango/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/182.3911.40/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/mango/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/182.3911.40/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mango/workspace

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mango/workspace/cmake-build-debug

# Include any dependencies generated for this target.
include second/CMakeFiles/main.cpp.dir/depend.make

# Include the progress variables for this target.
include second/CMakeFiles/main.cpp.dir/progress.make

# Include the compile flags for this target's objects.
include second/CMakeFiles/main.cpp.dir/flags.make

second/CMakeFiles/main.cpp.dir/fun.cpp.o: second/CMakeFiles/main.cpp.dir/flags.make
second/CMakeFiles/main.cpp.dir/fun.cpp.o: ../second/fun.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mango/workspace/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object second/CMakeFiles/main.cpp.dir/fun.cpp.o"
	cd /home/mango/workspace/cmake-build-debug/second && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.cpp.dir/fun.cpp.o -c /home/mango/workspace/second/fun.cpp

second/CMakeFiles/main.cpp.dir/fun.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.cpp.dir/fun.cpp.i"
	cd /home/mango/workspace/cmake-build-debug/second && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mango/workspace/second/fun.cpp > CMakeFiles/main.cpp.dir/fun.cpp.i

second/CMakeFiles/main.cpp.dir/fun.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.cpp.dir/fun.cpp.s"
	cd /home/mango/workspace/cmake-build-debug/second && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mango/workspace/second/fun.cpp -o CMakeFiles/main.cpp.dir/fun.cpp.s

# Object files for target main.cpp
main_cpp_OBJECTS = \
"CMakeFiles/main.cpp.dir/fun.cpp.o"

# External object files for target main.cpp
main_cpp_EXTERNAL_OBJECTS =

second/main.cpp: second/CMakeFiles/main.cpp.dir/fun.cpp.o
second/main.cpp: second/CMakeFiles/main.cpp.dir/build.make
second/main.cpp: second/CMakeFiles/main.cpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mango/workspace/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable main.cpp"
	cd /home/mango/workspace/cmake-build-debug/second && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.cpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
second/CMakeFiles/main.cpp.dir/build: second/main.cpp

.PHONY : second/CMakeFiles/main.cpp.dir/build

second/CMakeFiles/main.cpp.dir/clean:
	cd /home/mango/workspace/cmake-build-debug/second && $(CMAKE_COMMAND) -P CMakeFiles/main.cpp.dir/cmake_clean.cmake
.PHONY : second/CMakeFiles/main.cpp.dir/clean

second/CMakeFiles/main.cpp.dir/depend:
	cd /home/mango/workspace/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mango/workspace /home/mango/workspace/second /home/mango/workspace/cmake-build-debug /home/mango/workspace/cmake-build-debug/second /home/mango/workspace/cmake-build-debug/second/CMakeFiles/main.cpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : second/CMakeFiles/main.cpp.dir/depend
