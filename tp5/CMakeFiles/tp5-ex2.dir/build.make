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
CMAKE_COMMAND = /usr/local/lib/python3.9/dist-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /usr/local/lib/python3.9/dist-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/2inf1/antoine.bastos/Documents/CPP/CPP_Exercises/tp5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/2inf1/antoine.bastos/Documents/CPP/CPP_Exercises/tp5

# Include any dependencies generated for this target.
include CMakeFiles/tp5-ex2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/tp5-ex2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/tp5-ex2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tp5-ex2.dir/flags.make

CMakeFiles/tp5-ex2.dir/2-ptr/main.cpp.o: CMakeFiles/tp5-ex2.dir/flags.make
CMakeFiles/tp5-ex2.dir/2-ptr/main.cpp.o: 2-ptr/main.cpp
CMakeFiles/tp5-ex2.dir/2-ptr/main.cpp.o: CMakeFiles/tp5-ex2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/2inf1/antoine.bastos/Documents/CPP/CPP_Exercises/tp5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tp5-ex2.dir/2-ptr/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/tp5-ex2.dir/2-ptr/main.cpp.o -MF CMakeFiles/tp5-ex2.dir/2-ptr/main.cpp.o.d -o CMakeFiles/tp5-ex2.dir/2-ptr/main.cpp.o -c /home/2inf1/antoine.bastos/Documents/CPP/CPP_Exercises/tp5/2-ptr/main.cpp

CMakeFiles/tp5-ex2.dir/2-ptr/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tp5-ex2.dir/2-ptr/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/2inf1/antoine.bastos/Documents/CPP/CPP_Exercises/tp5/2-ptr/main.cpp > CMakeFiles/tp5-ex2.dir/2-ptr/main.cpp.i

CMakeFiles/tp5-ex2.dir/2-ptr/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tp5-ex2.dir/2-ptr/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/2inf1/antoine.bastos/Documents/CPP/CPP_Exercises/tp5/2-ptr/main.cpp -o CMakeFiles/tp5-ex2.dir/2-ptr/main.cpp.s

# Object files for target tp5-ex2
tp5__ex2_OBJECTS = \
"CMakeFiles/tp5-ex2.dir/2-ptr/main.cpp.o"

# External object files for target tp5-ex2
tp5__ex2_EXTERNAL_OBJECTS =

tp5-ex2: CMakeFiles/tp5-ex2.dir/2-ptr/main.cpp.o
tp5-ex2: CMakeFiles/tp5-ex2.dir/build.make
tp5-ex2: CMakeFiles/tp5-ex2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/2inf1/antoine.bastos/Documents/CPP/CPP_Exercises/tp5/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tp5-ex2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tp5-ex2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tp5-ex2.dir/build: tp5-ex2
.PHONY : CMakeFiles/tp5-ex2.dir/build

CMakeFiles/tp5-ex2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tp5-ex2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tp5-ex2.dir/clean

CMakeFiles/tp5-ex2.dir/depend:
	cd /home/2inf1/antoine.bastos/Documents/CPP/CPP_Exercises/tp5 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/2inf1/antoine.bastos/Documents/CPP/CPP_Exercises/tp5 /home/2inf1/antoine.bastos/Documents/CPP/CPP_Exercises/tp5 /home/2inf1/antoine.bastos/Documents/CPP/CPP_Exercises/tp5 /home/2inf1/antoine.bastos/Documents/CPP/CPP_Exercises/tp5 /home/2inf1/antoine.bastos/Documents/CPP/CPP_Exercises/tp5/CMakeFiles/tp5-ex2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tp5-ex2.dir/depend

