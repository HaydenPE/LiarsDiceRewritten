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
CMAKE_SOURCE_DIR = /mnt/c/users/trick/OwnStuff/SE_Project/LiarsDiceRewritten/LiarsDiceRewritten

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/users/trick/OwnStuff/SE_Project/LiarsDiceRewritten/LiarsDiceRewritten/build

# Include any dependencies generated for this target.
include CMakeFiles/applibrary.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/applibrary.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/applibrary.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/applibrary.dir/flags.make

CMakeFiles/applibrary.dir/curbet.cpp.o: CMakeFiles/applibrary.dir/flags.make
CMakeFiles/applibrary.dir/curbet.cpp.o: ../curbet.cpp
CMakeFiles/applibrary.dir/curbet.cpp.o: CMakeFiles/applibrary.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/users/trick/OwnStuff/SE_Project/LiarsDiceRewritten/LiarsDiceRewritten/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/applibrary.dir/curbet.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/applibrary.dir/curbet.cpp.o -MF CMakeFiles/applibrary.dir/curbet.cpp.o.d -o CMakeFiles/applibrary.dir/curbet.cpp.o -c /mnt/c/users/trick/OwnStuff/SE_Project/LiarsDiceRewritten/LiarsDiceRewritten/curbet.cpp

CMakeFiles/applibrary.dir/curbet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/applibrary.dir/curbet.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/users/trick/OwnStuff/SE_Project/LiarsDiceRewritten/LiarsDiceRewritten/curbet.cpp > CMakeFiles/applibrary.dir/curbet.cpp.i

CMakeFiles/applibrary.dir/curbet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/applibrary.dir/curbet.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/users/trick/OwnStuff/SE_Project/LiarsDiceRewritten/LiarsDiceRewritten/curbet.cpp -o CMakeFiles/applibrary.dir/curbet.cpp.s

CMakeFiles/applibrary.dir/board.cpp.o: CMakeFiles/applibrary.dir/flags.make
CMakeFiles/applibrary.dir/board.cpp.o: ../board.cpp
CMakeFiles/applibrary.dir/board.cpp.o: CMakeFiles/applibrary.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/users/trick/OwnStuff/SE_Project/LiarsDiceRewritten/LiarsDiceRewritten/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/applibrary.dir/board.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/applibrary.dir/board.cpp.o -MF CMakeFiles/applibrary.dir/board.cpp.o.d -o CMakeFiles/applibrary.dir/board.cpp.o -c /mnt/c/users/trick/OwnStuff/SE_Project/LiarsDiceRewritten/LiarsDiceRewritten/board.cpp

CMakeFiles/applibrary.dir/board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/applibrary.dir/board.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/users/trick/OwnStuff/SE_Project/LiarsDiceRewritten/LiarsDiceRewritten/board.cpp > CMakeFiles/applibrary.dir/board.cpp.i

CMakeFiles/applibrary.dir/board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/applibrary.dir/board.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/users/trick/OwnStuff/SE_Project/LiarsDiceRewritten/LiarsDiceRewritten/board.cpp -o CMakeFiles/applibrary.dir/board.cpp.s

CMakeFiles/applibrary.dir/computerThinker.cpp.o: CMakeFiles/applibrary.dir/flags.make
CMakeFiles/applibrary.dir/computerThinker.cpp.o: ../computerThinker.cpp
CMakeFiles/applibrary.dir/computerThinker.cpp.o: CMakeFiles/applibrary.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/users/trick/OwnStuff/SE_Project/LiarsDiceRewritten/LiarsDiceRewritten/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/applibrary.dir/computerThinker.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/applibrary.dir/computerThinker.cpp.o -MF CMakeFiles/applibrary.dir/computerThinker.cpp.o.d -o CMakeFiles/applibrary.dir/computerThinker.cpp.o -c /mnt/c/users/trick/OwnStuff/SE_Project/LiarsDiceRewritten/LiarsDiceRewritten/computerThinker.cpp

CMakeFiles/applibrary.dir/computerThinker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/applibrary.dir/computerThinker.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/users/trick/OwnStuff/SE_Project/LiarsDiceRewritten/LiarsDiceRewritten/computerThinker.cpp > CMakeFiles/applibrary.dir/computerThinker.cpp.i

CMakeFiles/applibrary.dir/computerThinker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/applibrary.dir/computerThinker.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/users/trick/OwnStuff/SE_Project/LiarsDiceRewritten/LiarsDiceRewritten/computerThinker.cpp -o CMakeFiles/applibrary.dir/computerThinker.cpp.s

# Object files for target applibrary
applibrary_OBJECTS = \
"CMakeFiles/applibrary.dir/curbet.cpp.o" \
"CMakeFiles/applibrary.dir/board.cpp.o" \
"CMakeFiles/applibrary.dir/computerThinker.cpp.o"

# External object files for target applibrary
applibrary_EXTERNAL_OBJECTS =

libapplibrary.so: CMakeFiles/applibrary.dir/curbet.cpp.o
libapplibrary.so: CMakeFiles/applibrary.dir/board.cpp.o
libapplibrary.so: CMakeFiles/applibrary.dir/computerThinker.cpp.o
libapplibrary.so: CMakeFiles/applibrary.dir/build.make
libapplibrary.so: CMakeFiles/applibrary.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/users/trick/OwnStuff/SE_Project/LiarsDiceRewritten/LiarsDiceRewritten/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX shared library libapplibrary.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/applibrary.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/applibrary.dir/build: libapplibrary.so
.PHONY : CMakeFiles/applibrary.dir/build

CMakeFiles/applibrary.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/applibrary.dir/cmake_clean.cmake
.PHONY : CMakeFiles/applibrary.dir/clean

CMakeFiles/applibrary.dir/depend:
	cd /mnt/c/users/trick/OwnStuff/SE_Project/LiarsDiceRewritten/LiarsDiceRewritten/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/users/trick/OwnStuff/SE_Project/LiarsDiceRewritten/LiarsDiceRewritten /mnt/c/users/trick/OwnStuff/SE_Project/LiarsDiceRewritten/LiarsDiceRewritten /mnt/c/users/trick/OwnStuff/SE_Project/LiarsDiceRewritten/LiarsDiceRewritten/build /mnt/c/users/trick/OwnStuff/SE_Project/LiarsDiceRewritten/LiarsDiceRewritten/build /mnt/c/users/trick/OwnStuff/SE_Project/LiarsDiceRewritten/LiarsDiceRewritten/build/CMakeFiles/applibrary.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/applibrary.dir/depend

