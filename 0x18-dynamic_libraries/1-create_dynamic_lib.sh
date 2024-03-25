#!/bin/bash
# gcc *.c -c -fPIC && gcc *.o -shared -o liball.so
gcc -fPIC -shared -o liball.so *.c
