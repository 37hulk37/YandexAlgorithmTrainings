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
CMAKE_SOURCE_DIR = "C:\Users\user\CLionProjects\ACMP\Card Counter"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\user\CLionProjects\ACMP\Card Counter\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Card_Counter.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Card_Counter.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Card_Counter.dir/flags.make

CMakeFiles/Card_Counter.dir/main.cpp.obj: CMakeFiles/Card_Counter.dir/flags.make
CMakeFiles/Card_Counter.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\user\CLionProjects\ACMP\Card Counter\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Card_Counter.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Card_Counter.dir\main.cpp.obj -c "C:\Users\user\CLionProjects\ACMP\Card Counter\main.cpp"

CMakeFiles/Card_Counter.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Card_Counter.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\user\CLionProjects\ACMP\Card Counter\main.cpp" > CMakeFiles\Card_Counter.dir\main.cpp.i

CMakeFiles/Card_Counter.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Card_Counter.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\user\CLionProjects\ACMP\Card Counter\main.cpp" -o CMakeFiles\Card_Counter.dir\main.cpp.s

# Object files for target Card_Counter
Card_Counter_OBJECTS = \
"CMakeFiles/Card_Counter.dir/main.cpp.obj"

# External object files for target Card_Counter
Card_Counter_EXTERNAL_OBJECTS =

Card_Counter.exe: CMakeFiles/Card_Counter.dir/main.cpp.obj
Card_Counter.exe: CMakeFiles/Card_Counter.dir/build.make
Card_Counter.exe: CMakeFiles/Card_Counter.dir/linklibs.rsp
Card_Counter.exe: CMakeFiles/Card_Counter.dir/objects1.rsp
Card_Counter.exe: CMakeFiles/Card_Counter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\user\CLionProjects\ACMP\Card Counter\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Card_Counter.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Card_Counter.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Card_Counter.dir/build: Card_Counter.exe
.PHONY : CMakeFiles/Card_Counter.dir/build

CMakeFiles/Card_Counter.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Card_Counter.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Card_Counter.dir/clean

CMakeFiles/Card_Counter.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\user\CLionProjects\ACMP\Card Counter" "C:\Users\user\CLionProjects\ACMP\Card Counter" "C:\Users\user\CLionProjects\ACMP\Card Counter\cmake-build-debug" "C:\Users\user\CLionProjects\ACMP\Card Counter\cmake-build-debug" "C:\Users\user\CLionProjects\ACMP\Card Counter\cmake-build-debug\CMakeFiles\Card_Counter.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Card_Counter.dir/depend

