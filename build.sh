#!/bin/bash

path=$1

mkdir "$path"/build

for c_file in "$path"/*.c; do
    base=$(basename "$c_file" .c)
    gcc "$c_file" -o "$path/build/$base"
done