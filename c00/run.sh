#!/bin/sh

find "$1" -type f -name "*.c" -exec norminette -R CheckForbiddenSourceHeader {} \;

echo '\n'

gcc -Wall -Werror -Wextra $(find $1 -type f -name "*.c" | tr '\n' ' ') "$2" && ./a.out
