#!/bin/bash

path=${ALGOS}/cpp

g++ ${path}/standalone/reverse_linked_list_sa.cpp \
${path}/reverse_linked_list.cpp \
${path}/ListNode.cpp \
-o ${path}/standalone/a.out

${path}/standalone/a.out
rm ${path}/standalone/a.out

exit 0
