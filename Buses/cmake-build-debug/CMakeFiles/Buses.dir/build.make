# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\user\CLionProjects\ACMP\Buses

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\user\CLionProjects\ACMP\Buses\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Buses.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Buses.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Buses.dir/flags.make

CMakeFiles/Buses.dir/main.cpp.obj: CMakeFiles/Buses.dir/flags.make
CMakeFiles/Buses.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\user\CLionProjects\ACMP\Buses\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Buses.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Buses.dir\main.cpp.obj -c C:\Users\user\CLionProjects\ACMP\Buses\main.cpp

CMakeFiles/Buses.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Buses.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\user\CLionProjects\ACMP\Buses\main.cpp > CMakeFiles\Buses.dir\main.cpp.i

CMakeFiles/Buses.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Buses.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\user\CLionProjects\ACMP\Buses\main.cpp -o CMakeFiles\Buses.dir\main.cpp.s

# Object files for target Buses
Buses_OBJECTS = \
"CMakeFiles/Buses.dir/main.cpp.obj"

# External object files for target Buses
Buses_EXTERNAL_OBJECTS =

Buses.exe: CMakeFiles/Buses.dir/main.cpp.obj
Buses.exe: CMakeFiles/Buses.dir/build.make
Buses.exe: CMakeFiles/Buses.dir/linklibs.rsp
Buses.exe: CMakeFiles/Buses.dir/objects1.rsp
Buses.exe: CMakeFiles/Buses.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\user\CLionProjects\ACMP\Buses\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Buses.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Buses.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Buses.dir/build: Buses.exe
.PHONY : CMakeFiles/Buses.dir/build

CMakeFiles/Buses.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Buses.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Buses.dir/clean

CMakeFiles/Buses.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\user\CLionProjects\ACMP\Buses C:\Users\user\CLionProjects\ACMP\Buses C:\Users\user\CLionProjects\ACMP\Buses\cmake-build-debug C:\Users\user\CLionProjects\ACMP\Buses\cmake-build-debug C:\Users\user\CLionProjects\ACMP\Buses\cmake-build-debug\CMakeFiles\Buses.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Buses.dir/depend
