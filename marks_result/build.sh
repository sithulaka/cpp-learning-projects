#!/bin/bash
set -e  # Exit if any command fails

# Navigate to the script's directory
cd "$(dirname "$0")"

# Create and move into the build directory
mkdir -p build && cd build

# Run CMake and Build
echo "🛠️ Compiling Source Files..."
cmake ..
cmake --build .

echo "✅ Build completed. Binary is in build/bin/"
sleep 0.5

# Return to the project root
cd ..

# Call run.sh after build
chmod +x run.sh
./run.sh
