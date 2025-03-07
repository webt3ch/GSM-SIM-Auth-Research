#!/bin/bash
gcc -o test_a3a8 test_a3a8.c ../src/a3a8.c
./test_a3a8 && echo "A3/A8 Test Passed"
