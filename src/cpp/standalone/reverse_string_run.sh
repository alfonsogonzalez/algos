#!/bin/bash

path=${ALGOS}/cpp

g++ ${path}/standalone/reverse_string_sa.cpp \
${path}/reverse_string.cpp \
-o ${path}/standalone/a.out

${path}/standalone/a.out
rm ${path}/standalone/a.out

exit 0
