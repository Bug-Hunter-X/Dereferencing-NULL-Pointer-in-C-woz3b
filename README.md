# Dereferencing NULL Pointer in C

This repository demonstrates a common C programming error: dereferencing a NULL pointer.  Dereferencing a NULL pointer leads to undefined behavior, often resulting in a segmentation fault or program crash.  The example code showcases this error and provides a corrected version.

## Bug

The `bug.c` file contains the problematic code that attempts to write to a NULL pointer. 

## Solution

The `bugSolution.c` file demonstrates the corrected code, which includes a check to ensure the pointer is not NULL before dereferencing.

This example highlights the importance of pointer safety in C programming.