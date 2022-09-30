#!/bin/bash
gcc -c *.c -fpic
ar rcs liball.a *.o
