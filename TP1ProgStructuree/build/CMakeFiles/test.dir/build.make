# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_SOURCE_DIR = /home/voktes/Desktop/TP1ProgStructuree/TP1ProgStructuree

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/voktes/Desktop/TP1ProgStructuree/TP1ProgStructuree/build

# Include any dependencies generated for this target.
include CMakeFiles/test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/test.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test.dir/flags.make

CMakeFiles/test.dir/sources/UtilitairesVecteur.cpp.o: CMakeFiles/test.dir/flags.make
CMakeFiles/test.dir/sources/UtilitairesVecteur.cpp.o: /home/voktes/Desktop/TP1ProgStructuree/TP1ProgStructuree/sources/UtilitairesVecteur.cpp
CMakeFiles/test.dir/sources/UtilitairesVecteur.cpp.o: CMakeFiles/test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/voktes/Desktop/TP1ProgStructuree/TP1ProgStructuree/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test.dir/sources/UtilitairesVecteur.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test.dir/sources/UtilitairesVecteur.cpp.o -MF CMakeFiles/test.dir/sources/UtilitairesVecteur.cpp.o.d -o CMakeFiles/test.dir/sources/UtilitairesVecteur.cpp.o -c /home/voktes/Desktop/TP1ProgStructuree/TP1ProgStructuree/sources/UtilitairesVecteur.cpp

CMakeFiles/test.dir/sources/UtilitairesVecteur.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test.dir/sources/UtilitairesVecteur.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/voktes/Desktop/TP1ProgStructuree/TP1ProgStructuree/sources/UtilitairesVecteur.cpp > CMakeFiles/test.dir/sources/UtilitairesVecteur.cpp.i

CMakeFiles/test.dir/sources/UtilitairesVecteur.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test.dir/sources/UtilitairesVecteur.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/voktes/Desktop/TP1ProgStructuree/TP1ProgStructuree/sources/UtilitairesVecteur.cpp -o CMakeFiles/test.dir/sources/UtilitairesVecteur.cpp.s

CMakeFiles/test.dir/test/testUtilitaireVecteur.cpp.o: CMakeFiles/test.dir/flags.make
CMakeFiles/test.dir/test/testUtilitaireVecteur.cpp.o: /home/voktes/Desktop/TP1ProgStructuree/TP1ProgStructuree/test/testUtilitaireVecteur.cpp
CMakeFiles/test.dir/test/testUtilitaireVecteur.cpp.o: CMakeFiles/test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/voktes/Desktop/TP1ProgStructuree/TP1ProgStructuree/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/test.dir/test/testUtilitaireVecteur.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/test.dir/test/testUtilitaireVecteur.cpp.o -MF CMakeFiles/test.dir/test/testUtilitaireVecteur.cpp.o.d -o CMakeFiles/test.dir/test/testUtilitaireVecteur.cpp.o -c /home/voktes/Desktop/TP1ProgStructuree/TP1ProgStructuree/test/testUtilitaireVecteur.cpp

CMakeFiles/test.dir/test/testUtilitaireVecteur.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/test.dir/test/testUtilitaireVecteur.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/voktes/Desktop/TP1ProgStructuree/TP1ProgStructuree/test/testUtilitaireVecteur.cpp > CMakeFiles/test.dir/test/testUtilitaireVecteur.cpp.i

CMakeFiles/test.dir/test/testUtilitaireVecteur.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/test.dir/test/testUtilitaireVecteur.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/voktes/Desktop/TP1ProgStructuree/TP1ProgStructuree/test/testUtilitaireVecteur.cpp -o CMakeFiles/test.dir/test/testUtilitaireVecteur.cpp.s

# Object files for target test
test_OBJECTS = \
"CMakeFiles/test.dir/sources/UtilitairesVecteur.cpp.o" \
"CMakeFiles/test.dir/test/testUtilitaireVecteur.cpp.o"

# External object files for target test
test_EXTERNAL_OBJECTS =

test: CMakeFiles/test.dir/sources/UtilitairesVecteur.cpp.o
test: CMakeFiles/test.dir/test/testUtilitaireVecteur.cpp.o
test: CMakeFiles/test.dir/build.make
test: CMakeFiles/test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/voktes/Desktop/TP1ProgStructuree/TP1ProgStructuree/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test.dir/build: test
.PHONY : CMakeFiles/test.dir/build

CMakeFiles/test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test.dir/clean

CMakeFiles/test.dir/depend:
	cd /home/voktes/Desktop/TP1ProgStructuree/TP1ProgStructuree/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/voktes/Desktop/TP1ProgStructuree/TP1ProgStructuree /home/voktes/Desktop/TP1ProgStructuree/TP1ProgStructuree /home/voktes/Desktop/TP1ProgStructuree/TP1ProgStructuree/build /home/voktes/Desktop/TP1ProgStructuree/TP1ProgStructuree/build /home/voktes/Desktop/TP1ProgStructuree/TP1ProgStructuree/build/CMakeFiles/test.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/test.dir/depend

