#!/bin/bash

path=${ALGOS}/cpp

g++ ${path}/standalone/fib_sa.cpp \
${path}/fib.cpp \
-o ${path}/standalone/a.out

${path}/standalone/a.out
rm ${path}/standalone/a.out

exit 0
