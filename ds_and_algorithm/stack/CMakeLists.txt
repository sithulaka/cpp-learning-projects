cmake_minimum_required(VERSION 3.10)
project(ds_and_algorithm_stack)

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

# Set compiler flags based on compiler type
if(MSVC)
  # MSVC compiler flags
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4 /permissive-")
  set(CMAKE_CXX_FLAGS_DEBUG "/Od /Zi /DEBUG")
else()
  # GCC/Clang compiler flags
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O0 -Wall -Wextra -pedantic")
  # Enable assembly output for GCC/Clang
  set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,-Map,output.map")
endif()

# Debug symbols
set(CMAKE_BUILD_TYPE Debug)
