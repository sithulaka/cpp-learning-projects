#!/bin/bash

# Define project name (you can modify this to accept arguments if needed)
PROJECT_NAME="PlaneManagement"

# Create the main project directory
mkdir "$PROJECT_NAME"

# Create subdirectories for source files, headers, build, libraries, and documentation
mkdir -p "$PROJECT_NAME/src"
mkdir -p "$PROJECT_NAME/include"
mkdir -p "$PROJECT_NAME/build"
mkdir -p "$PROJECT_NAME/lib"
mkdir -p "$PROJECT_NAME/docs"

# Create initial files: README.md, .gitignore, CMakeLists.txt, Makefile
touch "$PROJECT_NAME/README.md"
touch "$PROJECT_NAME/.gitignore"
touch "$PROJECT_NAME/CMakeLists.txt"
touch "$PROJECT_NAME/Makefile"