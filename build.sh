#!/bin/bash

# Build all C source files in the specified folder.
#
# Usage:
#   ./build.sh 01_hello_world
#
# This will compile each .c file in 01_hello_world/ and place the resulting
# executables into 01_hello_world/build/

path=$1

mkdir -p "$path"/build

for c_file in "$path"/*.c; do
    base=$(basename "$c_file" .c)
    gcc "$c_file" -o "$path/build/$base"
    echo "Compiled '$c_file' → ./$path/build/$base"    
done