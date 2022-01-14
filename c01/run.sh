#!/bin/bash

TEST_DIR=$(dirname "$0")
EX_DIR="$1"

echo "#### TEST C01 ####"

echo "-- ex00: ft_ft --"
EX_PATH="$EX_DIR/ex00/ft_ft.c"
norminette $EX_PATH
gcc -Wall -Werror -Wextra $EX_PATH $TEST_DIR/ex00.c -o ex00
if [ $? -eq 0 ]; then
	./ex00
	if [ $? -eq 0 ]; then
		echo "success"
	else
		echo "error: test failed"
	fi
else
	echo "error: gcc compile failed"
fi
rm ex00

echo ""

echo "-- ex01: ft_ultimate_ft --"
EX_PATH="$EX_DIR/ex01/ft_ultimate_ft.c"
norminette $EX_PATH
gcc -Wall -Werror -Wextra $EX_PATH $TEST_DIR/ex01.c -o ex01
if [ $? -eq 0 ]; then
	./ex01
	if [ $? -eq 0 ]; then
		echo "success"
	else
		echo "error: test failed"
	fi
else
	echo "error: gcc compile failed"
fi
rm ex01

echo ""

echo "-- ex02: ft_swap --"
EX_PATH="$EX_DIR/ex02/ft_swap.c"
norminette $EX_PATH
gcc -Wall -Werror -Wextra $EX_PATH $TEST_DIR/ex02.c -o ex02
if [ $? -eq 0 ]; then
	./ex02
	if [ $? -eq 0 ]; then
		echo "success"
	else
		echo "error: test failed"
	fi
else
	echo "error: gcc compile failed"
fi
rm ex02

echo ""

echo "-- ex03: ft_div_mod --"
EX_PATH="$EX_DIR/ex03/ft_div_mod.c"
norminette $EX_PATH
gcc -Wall -Werror -Wextra $EX_PATH $TEST_DIR/ex03.c -o ex03
if [ $? -eq 0 ]; then
	./ex03
	if [ $? -eq 0 ]; then
		echo "success"
	else
		echo "error: test failed"
	fi
else
	echo "error: gcc compile failed"
fi
rm ex03

echo ""

echo "-- ex04: ft_ultimate_div_mod --"
EX_PATH="$EX_DIR/ex04/ft_ultimate_div_mod.c"
norminette $EX_PATH
gcc -Wall -Werror -Wextra $EX_PATH $TEST_DIR/ex04.c -o ex04
if [ $? -eq 0 ]; then
	./ex04
	if [ $? -eq 0 ]; then
		echo "success"
	else
		echo "error: test failed"
	fi
else
	echo "error: gcc compile failed"
fi
rm ex04

echo ""

echo "-- ex05: ft_putstr --"
EX_PATH="$EX_DIR/ex05/ft_putstr.c"
norminette $EX_PATH
gcc -Wall -Werror -Wextra $EX_PATH $TEST_DIR/ex05.c -o ex05
if [ $? -eq 0 ]; then
	./ex05
	if [ $? -eq 0 ]; then
		echo ""
	else
		echo "error: test failed"
	fi
else
	echo "error: gcc compile failed"
fi
rm ex05

echo ""

echo "-- ex06: ft_strlen --"
EX_PATH="$EX_DIR/ex06/ft_strlen.c"
norminette $EX_PATH
gcc -Wall -Werror -Wextra $EX_PATH $TEST_DIR/ex06.c -o ex06
if [ $? -eq 0 ]; then
	./ex06
	if [ $? -eq 0 ]; then
		echo "success"
	else
		echo "error: test failed"
	fi
else
	echo "error: gcc compile failed"
fi
rm ex06

echo ""

echo "-- ex07: ft_rev_int_tab --"
EX_PATH="$EX_DIR/ex07/ft_rev_int_tab.c"
norminette $EX_PATH
gcc -Wall -Werror -Wextra $EX_PATH $TEST_DIR/ex07.c -o ex07
if [ $? -eq 0 ]; then
	./ex07
	if [ $? -eq 0 ]; then
		echo "success"
	else
		echo "error: test failed"
	fi
else
	echo "error: gcc compile failed"
fi
rm ex07

echo ""

echo "-- ex08: ft_sort_int_tab --"
EX_PATH="$EX_DIR/ex08/ft_sort_int_tab.c"
norminette $EX_PATH
gcc -Wall -Werror -Wextra $EX_PATH $TEST_DIR/ex08.c -o ex08
if [ $? -eq 0 ]; then
	./ex08
	if [ $? -eq 0 ]; then
		echo "success"
	else
		echo "error: test failed"
	fi
	rm ex08
else
	echo "error: gcc compile failed"
fi
