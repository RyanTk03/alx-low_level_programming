#!/bin/bash

# Compile all .c files into .o files
gcc -c *.c

# Create the static library liball.a from the .o files
ar rcs liball.a *.o

# Clean up: remove the .o files
rm -f *.o
