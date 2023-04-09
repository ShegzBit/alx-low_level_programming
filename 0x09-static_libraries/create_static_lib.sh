#!/bin/bash
gcc -c -Wall -pedantic -Werror -Wextra *.c
ar rcs liball.a *.o
