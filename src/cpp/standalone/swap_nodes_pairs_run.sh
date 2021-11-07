#!/bin/bash

path=${ALGOS}/cpp

g++ ${path}/standalone/swap_nodes_pairs_sa.cpp \
${path}/swap_nodes_pairs.cpp \
${path}/ListNode.cpp \
-o ${path}/standalone/a.out

${path}/standalone/a.out
rm ${path}/standalone/a.out

exit 0
