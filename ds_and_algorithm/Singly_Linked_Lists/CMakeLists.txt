cmake_minimum_required(VERSION 3.10)
project(.\ds_and_algorithm\Singly_Linked_Lists)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Output directory setup
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Automatically detect all source and header files
file(GLOB_RECURSE SOURCES "src/*.cpp")
file(GLOB_RECURSE HEADERS "include/*.h")

# Create the executable
add_executable(executable ${SOURCES} ${HEADERS})

# Include directories
include_directories(include)

# Enable debugging flags
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0 -Wall -Wextra -pedantic")

# Enable assembly output
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,-Map,output.map")

# Debug symbols (useful for GDB)
set(CMAKE_BUILD_TYPE Debug)
