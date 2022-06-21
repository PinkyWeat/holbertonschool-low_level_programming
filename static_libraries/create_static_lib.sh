#!/bin/bash
gcc -c -Wall -Werror -Wextra *.
ar -rc liball.a *.c
