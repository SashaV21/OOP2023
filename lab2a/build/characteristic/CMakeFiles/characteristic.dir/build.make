# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_SOURCE_DIR = /home/students/v/vasilev.aa/oop2023/lab2a/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/students/v/vasilev.aa/oop2023/lab2a/build

# Include any dependencies generated for this target.
include characteristic/CMakeFiles/characteristic.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include characteristic/CMakeFiles/characteristic.dir/compiler_depend.make

# Include the progress variables for this target.
include characteristic/CMakeFiles/characteristic.dir/progress.make

# Include the compile flags for this target's objects.
include characteristic/CMakeFiles/characteristic.dir/flags.make

characteristic/CMakeFiles/characteristic.dir/characteristic.cpp.o: characteristic/CMakeFiles/characteristic.dir/flags.make
characteristic/CMakeFiles/characteristic.dir/characteristic.cpp.o: /home/students/v/vasilev.aa/oop2023/lab2a/src/characteristic/characteristic.cpp
characteristic/CMakeFiles/characteristic.dir/characteristic.cpp.o: characteristic/CMakeFiles/characteristic.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/students/v/vasilev.aa/oop2023/lab2a/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object characteristic/CMakeFiles/characteristic.dir/characteristic.cpp.o"
	cd /home/students/v/vasilev.aa/oop2023/lab2a/build/characteristic && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT characteristic/CMakeFiles/characteristic.dir/characteristic.cpp.o -MF CMakeFiles/characteristic.dir/characteristic.cpp.o.d -o CMakeFiles/characteristic.dir/characteristic.cpp.o -c /home/students/v/vasilev.aa/oop2023/lab2a/src/characteristic/characteristic.cpp

characteristic/CMakeFiles/characteristic.dir/characteristic.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/characteristic.dir/characteristic.cpp.i"
	cd /home/students/v/vasilev.aa/oop2023/lab2a/build/characteristic && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/students/v/vasilev.aa/oop2023/lab2a/src/characteristic/characteristic.cpp > CMakeFiles/characteristic.dir/characteristic.cpp.i

characteristic/CMakeFiles/characteristic.dir/characteristic.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/characteristic.dir/characteristic.cpp.s"
	cd /home/students/v/vasilev.aa/oop2023/lab2a/build/characteristic && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/students/v/vasilev.aa/oop2023/lab2a/src/characteristic/characteristic.cpp -o CMakeFiles/characteristic.dir/characteristic.cpp.s

# Object files for target characteristic
characteristic_OBJECTS = \
"CMakeFiles/characteristic.dir/characteristic.cpp.o"

# External object files for target characteristic
characteristic_EXTERNAL_OBJECTS =

characteristic/libcharacteristic.a: characteristic/CMakeFiles/characteristic.dir/characteristic.cpp.o
characteristic/libcharacteristic.a: characteristic/CMakeFiles/characteristic.dir/build.make
characteristic/libcharacteristic.a: characteristic/CMakeFiles/characteristic.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/students/v/vasilev.aa/oop2023/lab2a/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libcharacteristic.a"
	cd /home/students/v/vasilev.aa/oop2023/lab2a/build/characteristic && $(CMAKE_COMMAND) -P CMakeFiles/characteristic.dir/cmake_clean_target.cmake
	cd /home/students/v/vasilev.aa/oop2023/lab2a/build/characteristic && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/characteristic.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
characteristic/CMakeFiles/characteristic.dir/build: characteristic/libcharacteristic.a
.PHONY : characteristic/CMakeFiles/characteristic.dir/build

characteristic/CMakeFiles/characteristic.dir/clean:
	cd /home/students/v/vasilev.aa/oop2023/lab2a/build/characteristic && $(CMAKE_COMMAND) -P CMakeFiles/characteristic.dir/cmake_clean.cmake
.PHONY : characteristic/CMakeFiles/characteristic.dir/clean

characteristic/CMakeFiles/characteristic.dir/depend:
	cd /home/students/v/vasilev.aa/oop2023/lab2a/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/students/v/vasilev.aa/oop2023/lab2a/src /home/students/v/vasilev.aa/oop2023/lab2a/src/characteristic /home/students/v/vasilev.aa/oop2023/lab2a/build /home/students/v/vasilev.aa/oop2023/lab2a/build/characteristic /home/students/v/vasilev.aa/oop2023/lab2a/build/characteristic/CMakeFiles/characteristic.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : characteristic/CMakeFiles/characteristic.dir/depend

