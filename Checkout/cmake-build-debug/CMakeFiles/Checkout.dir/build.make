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
CMAKE_SOURCE_DIR = C:\Users\user\CLionProjects\ACMP\Checkout

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\user\CLionProjects\ACMP\Checkout\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Checkout.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Checkout.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Checkout.dir/flags.make

CMakeFiles/Checkout.dir/main.cpp.obj: CMakeFiles/Checkout.dir/flags.make
CMakeFiles/Checkout.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\user\CLionProjects\ACMP\Checkout\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Checkout.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Checkout.dir\main.cpp.obj -c C:\Users\user\CLionProjects\ACMP\Checkout\main.cpp

CMakeFiles/Checkout.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Checkout.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\user\CLionProjects\ACMP\Checkout\main.cpp > CMakeFiles\Checkout.dir\main.cpp.i

CMakeFiles/Checkout.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Checkout.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\user\CLionProjects\ACMP\Checkout\main.cpp -o CMakeFiles\Checkout.dir\main.cpp.s

# Object files for target Checkout
Checkout_OBJECTS = \
"CMakeFiles/Checkout.dir/main.cpp.obj"

# External object files for target Checkout
Checkout_EXTERNAL_OBJECTS =

Checkout.exe: CMakeFiles/Checkout.dir/main.cpp.obj
Checkout.exe: CMakeFiles/Checkout.dir/build.make
Checkout.exe: CMakeFiles/Checkout.dir/linklibs.rsp
Checkout.exe: CMakeFiles/Checkout.dir/objects1.rsp
Checkout.exe: CMakeFiles/Checkout.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\user\CLionProjects\ACMP\Checkout\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Checkout.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Checkout.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Checkout.dir/build: Checkout.exe
.PHONY : CMakeFiles/Checkout.dir/build

CMakeFiles/Checkout.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Checkout.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Checkout.dir/clean

CMakeFiles/Checkout.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\user\CLionProjects\ACMP\Checkout C:\Users\user\CLionProjects\ACMP\Checkout C:\Users\user\CLionProjects\ACMP\Checkout\cmake-build-debug C:\Users\user\CLionProjects\ACMP\Checkout\cmake-build-debug C:\Users\user\CLionProjects\ACMP\Checkout\cmake-build-debug\CMakeFiles\Checkout.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Checkout.dir/depend

