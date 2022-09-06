gcc *.c -c -fPIC *.c
gcc -shared -o liball.so *.o
