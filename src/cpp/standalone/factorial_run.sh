#!/bin/bash

path=${ALGOS}/cpp

g++ ${path}/standalone/factorial_sa.cpp \
${path}/factorial.cpp \
-o ${path}/standalone/a.out

${path}/standalone/a.out
rm ${path}/standalone/a.out

exit 0
