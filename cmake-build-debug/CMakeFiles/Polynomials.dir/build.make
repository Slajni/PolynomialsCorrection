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
CMAKE_COMMAND = /home/s/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/182.4505.18/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/s/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/182.4505.18/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/s/CLionProjects/Polynomials

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/s/CLionProjects/Polynomials/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Polynomials.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Polynomials.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Polynomials.dir/flags.make

CMakeFiles/Polynomials.dir/main.cpp.o: CMakeFiles/Polynomials.dir/flags.make
CMakeFiles/Polynomials.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/s/CLionProjects/Polynomials/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Polynomials.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Polynomials.dir/main.cpp.o -c /home/s/CLionProjects/Polynomials/main.cpp

CMakeFiles/Polynomials.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Polynomials.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/s/CLionProjects/Polynomials/main.cpp > CMakeFiles/Polynomials.dir/main.cpp.i

CMakeFiles/Polynomials.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Polynomials.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/s/CLionProjects/Polynomials/main.cpp -o CMakeFiles/Polynomials.dir/main.cpp.s

# Object files for target Polynomials
Polynomials_OBJECTS = \
"CMakeFiles/Polynomials.dir/main.cpp.o"

# External object files for target Polynomials
Polynomials_EXTERNAL_OBJECTS =

Polynomials: CMakeFiles/Polynomials.dir/main.cpp.o
Polynomials: CMakeFiles/Polynomials.dir/build.make
Polynomials: CMakeFiles/Polynomials.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/s/CLionProjects/Polynomials/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Polynomials"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Polynomials.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Polynomials.dir/build: Polynomials

.PHONY : CMakeFiles/Polynomials.dir/build

CMakeFiles/Polynomials.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Polynomials.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Polynomials.dir/clean

CMakeFiles/Polynomials.dir/depend:
	cd /home/s/CLionProjects/Polynomials/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/s/CLionProjects/Polynomials /home/s/CLionProjects/Polynomials /home/s/CLionProjects/Polynomials/cmake-build-debug /home/s/CLionProjects/Polynomials/cmake-build-debug /home/s/CLionProjects/Polynomials/cmake-build-debug/CMakeFiles/Polynomials.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Polynomials.dir/depend

