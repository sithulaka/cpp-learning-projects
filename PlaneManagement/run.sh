#!/bin/bash
set -e  # Exit if any command fails

# Navigate to the script's directory
cd "$(dirname "$0")"

# Check if the executable exists
EXECUTABLE="./build/bin/executable"
chmod +x "$EXECUTABLE"

if [[ -f "$EXECUTABLE" ]]; then
    echo "🚀 Starting the Program..."
    sleep 0.5
    "$EXECUTABLE"
else
    echo "❌ Error: Binary not found! Run build.sh first."
    exit 1
fi
