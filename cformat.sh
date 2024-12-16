#!/bin/bash

FILES=$(find ./src -type f \( -name "*.c" -o -name "*.h" \))

if [ -z "$FILES" ]; then
    echo "No .c or .h files found."
    exit 1
fi

echo "Checking with clang-format..."
clang-format -n $FILES

clang-format -i $FILES
echo "Done"

