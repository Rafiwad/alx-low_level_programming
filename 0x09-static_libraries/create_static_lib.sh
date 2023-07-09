#!/bin/bash
for file in *.c; do
    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c "$file"
done
rm *.o
echo "Static library liball.a created successfully!"
