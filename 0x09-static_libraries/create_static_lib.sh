#!bin/bash -e
gcc -c *.c -fpic
ar rc liball.a *.o
