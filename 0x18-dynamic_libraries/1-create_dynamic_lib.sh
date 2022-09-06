#!/bin/bash
gcc *.c -c -fpic
gcc -shared -o libdynamic.so *.o
