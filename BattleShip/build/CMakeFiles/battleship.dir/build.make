# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/mnc/code_ws/Data-Structures-and-Algorithms/BattleShip

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mnc/code_ws/Data-Structures-and-Algorithms/BattleShip/build

# Include any dependencies generated for this target.
include CMakeFiles/battleship.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/battleship.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/battleship.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/battleship.dir/flags.make

CMakeFiles/battleship.dir/src/main.cpp.o: CMakeFiles/battleship.dir/flags.make
CMakeFiles/battleship.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/battleship.dir/src/main.cpp.o: CMakeFiles/battleship.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mnc/code_ws/Data-Structures-and-Algorithms/BattleShip/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/battleship.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/battleship.dir/src/main.cpp.o -MF CMakeFiles/battleship.dir/src/main.cpp.o.d -o CMakeFiles/battleship.dir/src/main.cpp.o -c /home/mnc/code_ws/Data-Structures-and-Algorithms/BattleShip/src/main.cpp

CMakeFiles/battleship.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/battleship.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mnc/code_ws/Data-Structures-and-Algorithms/BattleShip/src/main.cpp > CMakeFiles/battleship.dir/src/main.cpp.i

CMakeFiles/battleship.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/battleship.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mnc/code_ws/Data-Structures-and-Algorithms/BattleShip/src/main.cpp -o CMakeFiles/battleship.dir/src/main.cpp.s

# Object files for target battleship
battleship_OBJECTS = \
"CMakeFiles/battleship.dir/src/main.cpp.o"

# External object files for target battleship
battleship_EXTERNAL_OBJECTS =

battleship: CMakeFiles/battleship.dir/src/main.cpp.o
battleship: CMakeFiles/battleship.dir/build.make
battleship: CMakeFiles/battleship.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mnc/code_ws/Data-Structures-and-Algorithms/BattleShip/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable battleship"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/battleship.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/battleship.dir/build: battleship
.PHONY : CMakeFiles/battleship.dir/build

CMakeFiles/battleship.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/battleship.dir/cmake_clean.cmake
.PHONY : CMakeFiles/battleship.dir/clean

CMakeFiles/battleship.dir/depend:
	cd /home/mnc/code_ws/Data-Structures-and-Algorithms/BattleShip/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mnc/code_ws/Data-Structures-and-Algorithms/BattleShip /home/mnc/code_ws/Data-Structures-and-Algorithms/BattleShip /home/mnc/code_ws/Data-Structures-and-Algorithms/BattleShip/build /home/mnc/code_ws/Data-Structures-and-Algorithms/BattleShip/build /home/mnc/code_ws/Data-Structures-and-Algorithms/BattleShip/build/CMakeFiles/battleship.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/battleship.dir/depend

