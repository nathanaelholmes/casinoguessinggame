# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\16038\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\193.6911.21\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\16038\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\193.6911.21\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\16038\CLionProjects\casinoguessinggame

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\16038\CLionProjects\casinoguessinggame\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/casinoguessinggame.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/casinoguessinggame.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/casinoguessinggame.dir/flags.make

CMakeFiles/casinoguessinggame.dir/main.cpp.obj: CMakeFiles/casinoguessinggame.dir/flags.make
CMakeFiles/casinoguessinggame.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\16038\CLionProjects\casinoguessinggame\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/casinoguessinggame.dir/main.cpp.obj"
	C:\Qt\Tools\mingw730_64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\casinoguessinggame.dir\main.cpp.obj -c C:\Users\16038\CLionProjects\casinoguessinggame\main.cpp

CMakeFiles/casinoguessinggame.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/casinoguessinggame.dir/main.cpp.i"
	C:\Qt\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\16038\CLionProjects\casinoguessinggame\main.cpp > CMakeFiles\casinoguessinggame.dir\main.cpp.i

CMakeFiles/casinoguessinggame.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/casinoguessinggame.dir/main.cpp.s"
	C:\Qt\Tools\mingw730_64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\16038\CLionProjects\casinoguessinggame\main.cpp -o CMakeFiles\casinoguessinggame.dir\main.cpp.s

# Object files for target casinoguessinggame
casinoguessinggame_OBJECTS = \
"CMakeFiles/casinoguessinggame.dir/main.cpp.obj"

# External object files for target casinoguessinggame
casinoguessinggame_EXTERNAL_OBJECTS =

casinoguessinggame.exe: CMakeFiles/casinoguessinggame.dir/main.cpp.obj
casinoguessinggame.exe: CMakeFiles/casinoguessinggame.dir/build.make
casinoguessinggame.exe: CMakeFiles/casinoguessinggame.dir/linklibs.rsp
casinoguessinggame.exe: CMakeFiles/casinoguessinggame.dir/objects1.rsp
casinoguessinggame.exe: CMakeFiles/casinoguessinggame.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\16038\CLionProjects\casinoguessinggame\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable casinoguessinggame.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\casinoguessinggame.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/casinoguessinggame.dir/build: casinoguessinggame.exe

.PHONY : CMakeFiles/casinoguessinggame.dir/build

CMakeFiles/casinoguessinggame.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\casinoguessinggame.dir\cmake_clean.cmake
.PHONY : CMakeFiles/casinoguessinggame.dir/clean

CMakeFiles/casinoguessinggame.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\16038\CLionProjects\casinoguessinggame C:\Users\16038\CLionProjects\casinoguessinggame C:\Users\16038\CLionProjects\casinoguessinggame\cmake-build-debug C:\Users\16038\CLionProjects\casinoguessinggame\cmake-build-debug C:\Users\16038\CLionProjects\casinoguessinggame\cmake-build-debug\CMakeFiles\casinoguessinggame.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/casinoguessinggame.dir/depend
