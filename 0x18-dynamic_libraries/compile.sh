#!/bin/bash

# Compile all C files in the current directory
for file in test/*.c; do
    if [ -f "$file" ]; then
        gcc -Wall -fPIC -c "$file"
    fi
done

# Link object files into a shared library
gcc -shared -o libdynamic.so *.o

# Cleanup: Remove the object files
rm *.o
