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
CMAKE_SOURCE_DIR = C:\Users\user\CLionProjects\ACMP\Cheating

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\user\CLionProjects\ACMP\Cheating\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Cheating.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Cheating.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Cheating.dir/flags.make

CMakeFiles/Cheating.dir/main.cpp.obj: CMakeFiles/Cheating.dir/flags.make
CMakeFiles/Cheating.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\user\CLionProjects\ACMP\Cheating\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Cheating.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Cheating.dir\main.cpp.obj -c C:\Users\user\CLionProjects\ACMP\Cheating\main.cpp

CMakeFiles/Cheating.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Cheating.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\user\CLionProjects\ACMP\Cheating\main.cpp > CMakeFiles\Cheating.dir\main.cpp.i

CMakeFiles/Cheating.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Cheating.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\user\CLionProjects\ACMP\Cheating\main.cpp -o CMakeFiles\Cheating.dir\main.cpp.s

# Object files for target Cheating
Cheating_OBJECTS = \
"CMakeFiles/Cheating.dir/main.cpp.obj"

# External object files for target Cheating
Cheating_EXTERNAL_OBJECTS =

Cheating.exe: CMakeFiles/Cheating.dir/main.cpp.obj
Cheating.exe: CMakeFiles/Cheating.dir/build.make
Cheating.exe: CMakeFiles/Cheating.dir/linklibs.rsp
Cheating.exe: CMakeFiles/Cheating.dir/objects1.rsp
Cheating.exe: CMakeFiles/Cheating.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\user\CLionProjects\ACMP\Cheating\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Cheating.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Cheating.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Cheating.dir/build: Cheating.exe
.PHONY : CMakeFiles/Cheating.dir/build

CMakeFiles/Cheating.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Cheating.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Cheating.dir/clean

CMakeFiles/Cheating.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\user\CLionProjects\ACMP\Cheating C:\Users\user\CLionProjects\ACMP\Cheating C:\Users\user\CLionProjects\ACMP\Cheating\cmake-build-debug C:\Users\user\CLionProjects\ACMP\Cheating\cmake-build-debug C:\Users\user\CLionProjects\ACMP\Cheating\cmake-build-debug\CMakeFiles\Cheating.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Cheating.dir/depend

