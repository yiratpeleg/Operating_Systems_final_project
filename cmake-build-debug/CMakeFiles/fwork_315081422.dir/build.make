# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/yirat/Desktop/clion-2019.3.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/yirat/Desktop/clion-2019.3.2/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/yirat/Desktop/fwork_315081422

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yirat/Desktop/fwork_315081422/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/fwork_315081422.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/fwork_315081422.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/fwork_315081422.dir/flags.make

CMakeFiles/fwork_315081422.dir/main.c.o: CMakeFiles/fwork_315081422.dir/flags.make
CMakeFiles/fwork_315081422.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yirat/Desktop/fwork_315081422/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/fwork_315081422.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/fwork_315081422.dir/main.c.o   -c /home/yirat/Desktop/fwork_315081422/main.c

CMakeFiles/fwork_315081422.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/fwork_315081422.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/yirat/Desktop/fwork_315081422/main.c > CMakeFiles/fwork_315081422.dir/main.c.i

CMakeFiles/fwork_315081422.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/fwork_315081422.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/yirat/Desktop/fwork_315081422/main.c -o CMakeFiles/fwork_315081422.dir/main.c.s

CMakeFiles/fwork_315081422.dir/process_layout_q.c.o: CMakeFiles/fwork_315081422.dir/flags.make
CMakeFiles/fwork_315081422.dir/process_layout_q.c.o: ../process_layout_q.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/yirat/Desktop/fwork_315081422/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/fwork_315081422.dir/process_layout_q.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/fwork_315081422.dir/process_layout_q.c.o   -c /home/yirat/Desktop/fwork_315081422/process_layout_q.c

CMakeFiles/fwork_315081422.dir/process_layout_q.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/fwork_315081422.dir/process_layout_q.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/yirat/Desktop/fwork_315081422/process_layout_q.c > CMakeFiles/fwork_315081422.dir/process_layout_q.c.i

CMakeFiles/fwork_315081422.dir/process_layout_q.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/fwork_315081422.dir/process_layout_q.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/yirat/Desktop/fwork_315081422/process_layout_q.c -o CMakeFiles/fwork_315081422.dir/process_layout_q.c.s

# Object files for target fwork_315081422
fwork_315081422_OBJECTS = \
"CMakeFiles/fwork_315081422.dir/main.c.o" \
"CMakeFiles/fwork_315081422.dir/process_layout_q.c.o"

# External object files for target fwork_315081422
fwork_315081422_EXTERNAL_OBJECTS =

fwork_315081422: CMakeFiles/fwork_315081422.dir/main.c.o
fwork_315081422: CMakeFiles/fwork_315081422.dir/process_layout_q.c.o
fwork_315081422: CMakeFiles/fwork_315081422.dir/build.make
fwork_315081422: CMakeFiles/fwork_315081422.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/yirat/Desktop/fwork_315081422/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable fwork_315081422"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/fwork_315081422.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/fwork_315081422.dir/build: fwork_315081422

.PHONY : CMakeFiles/fwork_315081422.dir/build

CMakeFiles/fwork_315081422.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/fwork_315081422.dir/cmake_clean.cmake
.PHONY : CMakeFiles/fwork_315081422.dir/clean

CMakeFiles/fwork_315081422.dir/depend:
	cd /home/yirat/Desktop/fwork_315081422/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yirat/Desktop/fwork_315081422 /home/yirat/Desktop/fwork_315081422 /home/yirat/Desktop/fwork_315081422/cmake-build-debug /home/yirat/Desktop/fwork_315081422/cmake-build-debug /home/yirat/Desktop/fwork_315081422/cmake-build-debug/CMakeFiles/fwork_315081422.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/fwork_315081422.dir/depend

