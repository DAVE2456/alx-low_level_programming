gcc *.c -c -fPIC *.c
gcc -shared -o libdynamic.so *.o
