#!/bin/bash
c_files=$(find . -name "*.c")
for c_file in $c_files; do
  gcc -c -fPIC -Wall -pedantic -Werror -Wextra -std=gnu89 $c_file 
done
gcc -shared -o liball.so *.o
