# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/maxts/Programmering/NTNU/5. Semester/C++ for Programmers/Oving3"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/maxts/Programmering/NTNU/5. Semester/C++ for Programmers/Oving3/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/commoditytest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/commoditytest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/commoditytest.dir/flags.make

CMakeFiles/commoditytest.dir/Commodity.cpp.o: CMakeFiles/commoditytest.dir/flags.make
CMakeFiles/commoditytest.dir/Commodity.cpp.o: ../Commodity.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/maxts/Programmering/NTNU/5. Semester/C++ for Programmers/Oving3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/commoditytest.dir/Commodity.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/commoditytest.dir/Commodity.cpp.o -c "/Users/maxts/Programmering/NTNU/5. Semester/C++ for Programmers/Oving3/Commodity.cpp"

CMakeFiles/commoditytest.dir/Commodity.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/commoditytest.dir/Commodity.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/maxts/Programmering/NTNU/5. Semester/C++ for Programmers/Oving3/Commodity.cpp" > CMakeFiles/commoditytest.dir/Commodity.cpp.i

CMakeFiles/commoditytest.dir/Commodity.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/commoditytest.dir/Commodity.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/maxts/Programmering/NTNU/5. Semester/C++ for Programmers/Oving3/Commodity.cpp" -o CMakeFiles/commoditytest.dir/Commodity.cpp.s

CMakeFiles/commoditytest.dir/Commodity_test.cpp.o: CMakeFiles/commoditytest.dir/flags.make
CMakeFiles/commoditytest.dir/Commodity_test.cpp.o: ../Commodity_test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/maxts/Programmering/NTNU/5. Semester/C++ for Programmers/Oving3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/commoditytest.dir/Commodity_test.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/commoditytest.dir/Commodity_test.cpp.o -c "/Users/maxts/Programmering/NTNU/5. Semester/C++ for Programmers/Oving3/Commodity_test.cpp"

CMakeFiles/commoditytest.dir/Commodity_test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/commoditytest.dir/Commodity_test.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/maxts/Programmering/NTNU/5. Semester/C++ for Programmers/Oving3/Commodity_test.cpp" > CMakeFiles/commoditytest.dir/Commodity_test.cpp.i

CMakeFiles/commoditytest.dir/Commodity_test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/commoditytest.dir/Commodity_test.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/maxts/Programmering/NTNU/5. Semester/C++ for Programmers/Oving3/Commodity_test.cpp" -o CMakeFiles/commoditytest.dir/Commodity_test.cpp.s

# Object files for target commoditytest
commoditytest_OBJECTS = \
"CMakeFiles/commoditytest.dir/Commodity.cpp.o" \
"CMakeFiles/commoditytest.dir/Commodity_test.cpp.o"

# External object files for target commoditytest
commoditytest_EXTERNAL_OBJECTS =

commoditytest: CMakeFiles/commoditytest.dir/Commodity.cpp.o
commoditytest: CMakeFiles/commoditytest.dir/Commodity_test.cpp.o
commoditytest: CMakeFiles/commoditytest.dir/build.make
commoditytest: CMakeFiles/commoditytest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/maxts/Programmering/NTNU/5. Semester/C++ for Programmers/Oving3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable commoditytest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/commoditytest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/commoditytest.dir/build: commoditytest

.PHONY : CMakeFiles/commoditytest.dir/build

CMakeFiles/commoditytest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/commoditytest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/commoditytest.dir/clean

CMakeFiles/commoditytest.dir/depend:
	cd "/Users/maxts/Programmering/NTNU/5. Semester/C++ for Programmers/Oving3/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/maxts/Programmering/NTNU/5. Semester/C++ for Programmers/Oving3" "/Users/maxts/Programmering/NTNU/5. Semester/C++ for Programmers/Oving3" "/Users/maxts/Programmering/NTNU/5. Semester/C++ for Programmers/Oving3/cmake-build-debug" "/Users/maxts/Programmering/NTNU/5. Semester/C++ for Programmers/Oving3/cmake-build-debug" "/Users/maxts/Programmering/NTNU/5. Semester/C++ for Programmers/Oving3/cmake-build-debug/CMakeFiles/commoditytest.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/commoditytest.dir/depend

