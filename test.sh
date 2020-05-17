#!/bin/bash

mkdir -p tests

cp src/vector.d.ts tests/vector.d.ts
cat src/vector_test.ts | gcc -DNAMED -E -include src/test.h -include src/vector.h - | sed --expression='s/#.*$//;/^$/d' > tests/vector_named.test.ts
cat src/vector_test.ts | gcc -DINDEXED -E -include src/test.h -include src/vector.h - | sed --expression='s/#.*$//;/^$/d' > tests/vector_index.test.ts


#yarn ts-jest