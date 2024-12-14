#!/bin/bash

llistC="./src/LinkedList/*.c"
llistH="./src/LinkedList/*.h"

stackC="./src/Stack/*.c"
stackH="./src/Stack/*.h"

queueC="./src/Queue/*.c"
queueH="./src/Queue/*.h"

echo "check clang-format $llistC $llistH $stackC $stackH $queueC $queueH"
clang-format -n $llistC $llistH $stackC $stackH $queueC $queueH

clang-format -i $llistC $llistH $stackC $stackH $queueC $queueH
echo "Done"

