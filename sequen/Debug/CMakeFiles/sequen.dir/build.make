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
CMAKE_SOURCE_DIR = /home/aknightive/CLionProjects/sequen

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/aknightive/CLionProjects/sequen/Debug

# Include any dependencies generated for this target.
include CMakeFiles/sequen.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/sequen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/sequen.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sequen.dir/flags.make

CMakeFiles/sequen.dir/main.cpp.o: CMakeFiles/sequen.dir/flags.make
CMakeFiles/sequen.dir/main.cpp.o: ../main.cpp
CMakeFiles/sequen.dir/main.cpp.o: CMakeFiles/sequen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aknightive/CLionProjects/sequen/Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sequen.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sequen.dir/main.cpp.o -MF CMakeFiles/sequen.dir/main.cpp.o.d -o CMakeFiles/sequen.dir/main.cpp.o -c /home/aknightive/CLionProjects/sequen/main.cpp

CMakeFiles/sequen.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sequen.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aknightive/CLionProjects/sequen/main.cpp > CMakeFiles/sequen.dir/main.cpp.i

CMakeFiles/sequen.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sequen.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aknightive/CLionProjects/sequen/main.cpp -o CMakeFiles/sequen.dir/main.cpp.s

CMakeFiles/sequen.dir/src/sequen.cpp.o: CMakeFiles/sequen.dir/flags.make
CMakeFiles/sequen.dir/src/sequen.cpp.o: ../src/sequen.cpp
CMakeFiles/sequen.dir/src/sequen.cpp.o: CMakeFiles/sequen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/aknightive/CLionProjects/sequen/Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/sequen.dir/src/sequen.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sequen.dir/src/sequen.cpp.o -MF CMakeFiles/sequen.dir/src/sequen.cpp.o.d -o CMakeFiles/sequen.dir/src/sequen.cpp.o -c /home/aknightive/CLionProjects/sequen/src/sequen.cpp

CMakeFiles/sequen.dir/src/sequen.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sequen.dir/src/sequen.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/aknightive/CLionProjects/sequen/src/sequen.cpp > CMakeFiles/sequen.dir/src/sequen.cpp.i

CMakeFiles/sequen.dir/src/sequen.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sequen.dir/src/sequen.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/aknightive/CLionProjects/sequen/src/sequen.cpp -o CMakeFiles/sequen.dir/src/sequen.cpp.s

# Object files for target sequen
sequen_OBJECTS = \
"CMakeFiles/sequen.dir/main.cpp.o" \
"CMakeFiles/sequen.dir/src/sequen.cpp.o"

# External object files for target sequen
sequen_EXTERNAL_OBJECTS =

sequen: CMakeFiles/sequen.dir/main.cpp.o
sequen: CMakeFiles/sequen.dir/src/sequen.cpp.o
sequen: CMakeFiles/sequen.dir/build.make
sequen: CMakeFiles/sequen.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/aknightive/CLionProjects/sequen/Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable sequen"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/sequen.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sequen.dir/build: sequen
.PHONY : CMakeFiles/sequen.dir/build

CMakeFiles/sequen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/sequen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/sequen.dir/clean

CMakeFiles/sequen.dir/depend:
	cd /home/aknightive/CLionProjects/sequen/Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/aknightive/CLionProjects/sequen /home/aknightive/CLionProjects/sequen /home/aknightive/CLionProjects/sequen/Debug /home/aknightive/CLionProjects/sequen/Debug /home/aknightive/CLionProjects/sequen/Debug/CMakeFiles/sequen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sequen.dir/depend

