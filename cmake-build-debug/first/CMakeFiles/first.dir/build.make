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
CMAKE_COMMAND = /home/mango/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/182.4505.18/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/mango/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/182.4505.18/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mango/ClionWorkspace

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mango/ClionWorkspace/cmake-build-debug

# Include any dependencies generated for this target.
include first/CMakeFiles/first.dir/depend.make

# Include the progress variables for this target.
include first/CMakeFiles/first.dir/progress.make

# Include the compile flags for this target's objects.
include first/CMakeFiles/first.dir/flags.make

first/CMakeFiles/first.dir/main.cpp.o: first/CMakeFiles/first.dir/flags.make
first/CMakeFiles/first.dir/main.cpp.o: ../first/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mango/ClionWorkspace/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object first/CMakeFiles/first.dir/main.cpp.o"
	cd /home/mango/ClionWorkspace/cmake-build-debug/first && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/first.dir/main.cpp.o -c /home/mango/ClionWorkspace/first/main.cpp

first/CMakeFiles/first.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/first.dir/main.cpp.i"
	cd /home/mango/ClionWorkspace/cmake-build-debug/first && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mango/ClionWorkspace/first/main.cpp > CMakeFiles/first.dir/main.cpp.i

first/CMakeFiles/first.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/first.dir/main.cpp.s"
	cd /home/mango/ClionWorkspace/cmake-build-debug/first && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mango/ClionWorkspace/first/main.cpp -o CMakeFiles/first.dir/main.cpp.s

first/CMakeFiles/first.dir/tabtenn0.cpp.o: first/CMakeFiles/first.dir/flags.make
first/CMakeFiles/first.dir/tabtenn0.cpp.o: ../first/tabtenn0.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mango/ClionWorkspace/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object first/CMakeFiles/first.dir/tabtenn0.cpp.o"
	cd /home/mango/ClionWorkspace/cmake-build-debug/first && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/first.dir/tabtenn0.cpp.o -c /home/mango/ClionWorkspace/first/tabtenn0.cpp

first/CMakeFiles/first.dir/tabtenn0.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/first.dir/tabtenn0.cpp.i"
	cd /home/mango/ClionWorkspace/cmake-build-debug/first && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mango/ClionWorkspace/first/tabtenn0.cpp > CMakeFiles/first.dir/tabtenn0.cpp.i

first/CMakeFiles/first.dir/tabtenn0.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/first.dir/tabtenn0.cpp.s"
	cd /home/mango/ClionWorkspace/cmake-build-debug/first && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mango/ClionWorkspace/first/tabtenn0.cpp -o CMakeFiles/first.dir/tabtenn0.cpp.s

# Object files for target first
first_OBJECTS = \
"CMakeFiles/first.dir/main.cpp.o" \
"CMakeFiles/first.dir/tabtenn0.cpp.o"

# External object files for target first
first_EXTERNAL_OBJECTS =

first/first: first/CMakeFiles/first.dir/main.cpp.o
first/first: first/CMakeFiles/first.dir/tabtenn0.cpp.o
first/first: first/CMakeFiles/first.dir/build.make
first/first: first/CMakeFiles/first.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mango/ClionWorkspace/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable first"
	cd /home/mango/ClionWorkspace/cmake-build-debug/first && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/first.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
first/CMakeFiles/first.dir/build: first/first

.PHONY : first/CMakeFiles/first.dir/build

first/CMakeFiles/first.dir/clean:
	cd /home/mango/ClionWorkspace/cmake-build-debug/first && $(CMAKE_COMMAND) -P CMakeFiles/first.dir/cmake_clean.cmake
.PHONY : first/CMakeFiles/first.dir/clean

first/CMakeFiles/first.dir/depend:
	cd /home/mango/ClionWorkspace/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mango/ClionWorkspace /home/mango/ClionWorkspace/first /home/mango/ClionWorkspace/cmake-build-debug /home/mango/ClionWorkspace/cmake-build-debug/first /home/mango/ClionWorkspace/cmake-build-debug/first/CMakeFiles/first.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : first/CMakeFiles/first.dir/depend
