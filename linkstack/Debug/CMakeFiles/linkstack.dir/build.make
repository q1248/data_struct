# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/aknightive/CLionProjects/linkstack

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aknightive/CLionProjects/linkstack/Debug

# Include any dependencies generated for this target.
include CMakeFiles/linkstack.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/linkstack.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/linkstack.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/linkstack.dir/flags.make

CMakeFiles/linkstack.dir/main.cpp.o: CMakeFiles/linkstack.dir/flags.make
CMakeFiles/linkstack.dir/main.cpp.o: ../main.cpp
CMakeFiles/linkstack.dir/main.cpp.o: CMakeFiles/linkstack.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aknightive/CLionProjects/linkstack/Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/linkstack.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/linkstack.dir/main.cpp.o -MF CMakeFiles/linkstack.dir/main.cpp.o.d -o CMakeFiles/linkstack.dir/main.cpp.o -c /home/aknightive/CLionProjects/linkstack/main.cpp

CMakeFiles/linkstack.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/linkstack.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aknightive/CLionProjects/linkstack/main.cpp > CMakeFiles/linkstack.dir/main.cpp.i

CMakeFiles/linkstack.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/linkstack.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aknightive/CLionProjects/linkstack/main.cpp -o CMakeFiles/linkstack.dir/main.cpp.s

CMakeFiles/linkstack.dir/src/linkstack.cpp.o: CMakeFiles/linkstack.dir/flags.make
CMakeFiles/linkstack.dir/src/linkstack.cpp.o: ../src/linkstack.cpp
CMakeFiles/linkstack.dir/src/linkstack.cpp.o: CMakeFiles/linkstack.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aknightive/CLionProjects/linkstack/Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/linkstack.dir/src/linkstack.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/linkstack.dir/src/linkstack.cpp.o -MF CMakeFiles/linkstack.dir/src/linkstack.cpp.o.d -o CMakeFiles/linkstack.dir/src/linkstack.cpp.o -c /home/aknightive/CLionProjects/linkstack/src/linkstack.cpp

CMakeFiles/linkstack.dir/src/linkstack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/linkstack.dir/src/linkstack.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aknightive/CLionProjects/linkstack/src/linkstack.cpp > CMakeFiles/linkstack.dir/src/linkstack.cpp.i

CMakeFiles/linkstack.dir/src/linkstack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/linkstack.dir/src/linkstack.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aknightive/CLionProjects/linkstack/src/linkstack.cpp -o CMakeFiles/linkstack.dir/src/linkstack.cpp.s

# Object files for target linkstack
linkstack_OBJECTS = \
"CMakeFiles/linkstack.dir/main.cpp.o" \
"CMakeFiles/linkstack.dir/src/linkstack.cpp.o"

# External object files for target linkstack
linkstack_EXTERNAL_OBJECTS =

linkstack: CMakeFiles/linkstack.dir/main.cpp.o
linkstack: CMakeFiles/linkstack.dir/src/linkstack.cpp.o
linkstack: CMakeFiles/linkstack.dir/build.make
linkstack: CMakeFiles/linkstack.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/aknightive/CLionProjects/linkstack/Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable linkstack"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/linkstack.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/linkstack.dir/build: linkstack
.PHONY : CMakeFiles/linkstack.dir/build

CMakeFiles/linkstack.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/linkstack.dir/cmake_clean.cmake
.PHONY : CMakeFiles/linkstack.dir/clean

CMakeFiles/linkstack.dir/depend:
	cd /home/aknightive/CLionProjects/linkstack/Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aknightive/CLionProjects/linkstack /home/aknightive/CLionProjects/linkstack /home/aknightive/CLionProjects/linkstack/Debug /home/aknightive/CLionProjects/linkstack/Debug /home/aknightive/CLionProjects/linkstack/Debug/CMakeFiles/linkstack.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/linkstack.dir/depend

