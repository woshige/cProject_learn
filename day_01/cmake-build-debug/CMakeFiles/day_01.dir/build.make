# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2018.1\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2018.1\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\cProject\day_01

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\cProject\day_01\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/day_01.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/day_01.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/day_01.dir/flags.make

CMakeFiles/day_01.dir/main.c.obj: CMakeFiles/day_01.dir/flags.make
CMakeFiles/day_01.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\cProject\day_01\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/day_01.dir/main.c.obj"
	D:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\day_01.dir\main.c.obj   -c E:\cProject\day_01\main.c

CMakeFiles/day_01.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/day_01.dir/main.c.i"
	D:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\cProject\day_01\main.c > CMakeFiles\day_01.dir\main.c.i

CMakeFiles/day_01.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/day_01.dir/main.c.s"
	D:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\cProject\day_01\main.c -o CMakeFiles\day_01.dir\main.c.s

CMakeFiles/day_01.dir/main.c.obj.requires:

.PHONY : CMakeFiles/day_01.dir/main.c.obj.requires

CMakeFiles/day_01.dir/main.c.obj.provides: CMakeFiles/day_01.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\day_01.dir\build.make CMakeFiles/day_01.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/day_01.dir/main.c.obj.provides

CMakeFiles/day_01.dir/main.c.obj.provides.build: CMakeFiles/day_01.dir/main.c.obj


CMakeFiles/day_01.dir/variable/test.c.obj: CMakeFiles/day_01.dir/flags.make
CMakeFiles/day_01.dir/variable/test.c.obj: ../variable/test.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\cProject\day_01\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/day_01.dir/variable/test.c.obj"
	D:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\day_01.dir\variable\test.c.obj   -c E:\cProject\day_01\variable\test.c

CMakeFiles/day_01.dir/variable/test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/day_01.dir/variable/test.c.i"
	D:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\cProject\day_01\variable\test.c > CMakeFiles\day_01.dir\variable\test.c.i

CMakeFiles/day_01.dir/variable/test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/day_01.dir/variable/test.c.s"
	D:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\cProject\day_01\variable\test.c -o CMakeFiles\day_01.dir\variable\test.c.s

CMakeFiles/day_01.dir/variable/test.c.obj.requires:

.PHONY : CMakeFiles/day_01.dir/variable/test.c.obj.requires

CMakeFiles/day_01.dir/variable/test.c.obj.provides: CMakeFiles/day_01.dir/variable/test.c.obj.requires
	$(MAKE) -f CMakeFiles\day_01.dir\build.make CMakeFiles/day_01.dir/variable/test.c.obj.provides.build
.PHONY : CMakeFiles/day_01.dir/variable/test.c.obj.provides

CMakeFiles/day_01.dir/variable/test.c.obj.provides.build: CMakeFiles/day_01.dir/variable/test.c.obj


CMakeFiles/day_01.dir/variable/test_constant.c.obj: CMakeFiles/day_01.dir/flags.make
CMakeFiles/day_01.dir/variable/test_constant.c.obj: ../variable/test_constant.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\cProject\day_01\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/day_01.dir/variable/test_constant.c.obj"
	D:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\day_01.dir\variable\test_constant.c.obj   -c E:\cProject\day_01\variable\test_constant.c

CMakeFiles/day_01.dir/variable/test_constant.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/day_01.dir/variable/test_constant.c.i"
	D:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E E:\cProject\day_01\variable\test_constant.c > CMakeFiles\day_01.dir\variable\test_constant.c.i

CMakeFiles/day_01.dir/variable/test_constant.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/day_01.dir/variable/test_constant.c.s"
	D:\PROGRA~1\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S E:\cProject\day_01\variable\test_constant.c -o CMakeFiles\day_01.dir\variable\test_constant.c.s

CMakeFiles/day_01.dir/variable/test_constant.c.obj.requires:

.PHONY : CMakeFiles/day_01.dir/variable/test_constant.c.obj.requires

CMakeFiles/day_01.dir/variable/test_constant.c.obj.provides: CMakeFiles/day_01.dir/variable/test_constant.c.obj.requires
	$(MAKE) -f CMakeFiles\day_01.dir\build.make CMakeFiles/day_01.dir/variable/test_constant.c.obj.provides.build
.PHONY : CMakeFiles/day_01.dir/variable/test_constant.c.obj.provides

CMakeFiles/day_01.dir/variable/test_constant.c.obj.provides.build: CMakeFiles/day_01.dir/variable/test_constant.c.obj


# Object files for target day_01
day_01_OBJECTS = \
"CMakeFiles/day_01.dir/main.c.obj" \
"CMakeFiles/day_01.dir/variable/test.c.obj" \
"CMakeFiles/day_01.dir/variable/test_constant.c.obj"

# External object files for target day_01
day_01_EXTERNAL_OBJECTS =

day_01.exe: CMakeFiles/day_01.dir/main.c.obj
day_01.exe: CMakeFiles/day_01.dir/variable/test.c.obj
day_01.exe: CMakeFiles/day_01.dir/variable/test_constant.c.obj
day_01.exe: CMakeFiles/day_01.dir/build.make
day_01.exe: CMakeFiles/day_01.dir/linklibs.rsp
day_01.exe: CMakeFiles/day_01.dir/objects1.rsp
day_01.exe: CMakeFiles/day_01.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\cProject\day_01\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable day_01.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\day_01.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/day_01.dir/build: day_01.exe

.PHONY : CMakeFiles/day_01.dir/build

CMakeFiles/day_01.dir/requires: CMakeFiles/day_01.dir/main.c.obj.requires
CMakeFiles/day_01.dir/requires: CMakeFiles/day_01.dir/variable/test.c.obj.requires
CMakeFiles/day_01.dir/requires: CMakeFiles/day_01.dir/variable/test_constant.c.obj.requires

.PHONY : CMakeFiles/day_01.dir/requires

CMakeFiles/day_01.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\day_01.dir\cmake_clean.cmake
.PHONY : CMakeFiles/day_01.dir/clean

CMakeFiles/day_01.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\cProject\day_01 E:\cProject\day_01 E:\cProject\day_01\cmake-build-debug E:\cProject\day_01\cmake-build-debug E:\cProject\day_01\cmake-build-debug\CMakeFiles\day_01.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/day_01.dir/depend

