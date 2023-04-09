#!/bin/bash

# Compile all .c files into object files
gcc -c *.c

# Create static library
ar rc liball.a *.o

# Index the library
ranlib liball.a

# Clean up object files
rm *.o
