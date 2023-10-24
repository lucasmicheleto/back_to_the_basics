#!/bin/bash

# Compile the program
# gcc -o bin/main main.c
# ./bin/main

# Navigate to the project directory
#cd /path/to/your/project

# Create header files for all .c files in the exercises directory
# for file in exercises/*.c; do
#     # Use awk to extract function prototypes and write them to a .h file
#     # sed -n -e '/^void/p' -e '/^int/p' -e '/^char/p' "$file" > "${file%.c}.h"
#     awk -v RS= -v ORS='\n\n' '/^ *[^#include].*\)[^;]*$/{print}' "$file" > "${file%.c}.h"
# done

# Compile the project
gcc -O2 -g -m64 -I./exercises -I./data_structures main.c exercises/*.c data_structures/*.c -o bin/main
./bin/main