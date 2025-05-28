#!/bin/bash

# Check if project name is provided as argument
if [ $# -eq 0 ]; then
    echo "Error: Project name not provided"
    echo "Usage: $0 <project_name>"
    exit 1
fi

PROJECT_NAME="$1"

# Create the main project directory
mkdir -p "$PROJECT_NAME"

# Create subdirectories for source files, headers, build, libraries, and documentation
mkdir -p "$PROJECT_NAME/src"
mkdir -p "$PROJECT_NAME/include"
mkdir -p "$PROJECT_NAME/build"
mkdir -p "$PROJECT_NAME/lib"
mkdir -p "$PROJECT_NAME/docs"

# Create initial files: README.md and .gitignore
touch "$PROJECT_NAME/README.md"

# Create .gitignore with default content
cat <<EOL > "$PROJECT_NAME/.gitignore"
# Build directories and files
build/
!build/bin/
!build/bin/**
*.o
*.obj
*.ilk
*.pdb
*.exe
!build/bin/*.exe
*.dll
*.so
*.dylib
*.a
*.lib

# IDE files
.vscode/
.idea/
*.swp
*.swo
*~

# CMake generated files
CMakeCache.txt
CMakeFiles/
cmake_install.cmake
install_manifest.txt
compile_commands.json
CTestTestfile.cmake

# OS-specific files
.DS_Store
Thumbs.db
EOL

# Create a CMakeLists.txt file with the specified content
cd "$PROJECT_NAME"
cat <<EOL > CMakeLists.txt
cmake_minimum_required(VERSION 3.10)
project($PROJECT_NAME)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Output directory setup
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY \${CMAKE_BINARY_DIR}/bin)

# Automatically detect all source and header files
file(GLOB_RECURSE SOURCES "src/*.cpp")
file(GLOB_RECURSE HEADERS "include/*.h")

# Create the executable
add_executable(executable \${SOURCES} \${HEADERS})

# Include directories
include_directories(include)

# Enable debugging flags
set(CMAKE_CXX_FLAGS "\${CMAKE_CXX_FLAGS} -g -O0 -Wall -Wextra -pedantic")

# Enable assembly output
set(CMAKE_EXE_LINKER_FLAGS "\${CMAKE_EXE_LINKER_FLAGS} -Wl,-Map,output.map")

# Debug symbols (useful for GDB)
set(CMAKE_BUILD_TYPE Debug)
EOL

echo "$PROJECT_NAME Project files & folders created successfully!"
