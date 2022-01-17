#!/bin/bash

TEST_DIR=$(dirname "$0")
EX_DIR="$1"

echo "#### TEST C02 ####"

EX_NAME="ft_strcpy"
EX_NUM="ex00"
EX_PATH="$EX_DIR/$EX_NUM/$EX_NAME.c"
echo "-- $EX_NUM: $EX_NAME --"
norminette -R CheckForbiddenSourceHeader $EX_PATH
gcc -Wall -Werror -Wextra $EX_PATH $TEST_DIR/$EX_NUM.c -o $EX_NUM
if [ $? -eq 0 ]; then
	./$EX_NUM
	if [ $? -eq 0 ]; then
		echo "success"
	else
		echo "error: test failed"
	fi
	rm $EX_NUM
else
	echo "error: gcc compile failed"
fi
echo ""

EX_NAME="ft_strncpy"
EX_NUM="ex01"
EX_PATH="$EX_DIR/$EX_NUM/$EX_NAME.c"
echo "-- $EX_NUM: $EX_NAME --"
norminette -R CheckForbiddenSourceHeader $EX_PATH
gcc -Wall -Werror -Wextra $EX_PATH $TEST_DIR/$EX_NUM.c -o $EX_NUM
if [ $? -eq 0 ]; then
	./$EX_NUM
	if [ $? -eq 0 ]; then
		echo "success"
	else
		echo "error: test failed"
	fi
	rm $EX_NUM
else
	echo "error: gcc compile failed"
fi
echo ""

EX_NAME="ft_str_is_alpha"
EX_NUM="ex02"
EX_PATH="$EX_DIR/$EX_NUM/$EX_NAME.c"
echo "-- $EX_NUM: $EX_NAME --"
norminette -R CheckForbiddenSourceHeader $EX_PATH
gcc -Wall -Werror -Wextra $EX_PATH $TEST_DIR/$EX_NUM.c -o $EX_NUM
if [ $? -eq 0 ]; then
	./$EX_NUM
	if [ $? -eq 0 ]; then
		echo "success"
	else
		echo "error: test failed"
	fi
	rm $EX_NUM
else
	echo "error: gcc compile failed"
fi
echo ""

EX_NAME="ft_str_is_numeric"
EX_NUM="ex03"
EX_PATH="$EX_DIR/$EX_NUM/$EX_NAME.c"
echo "-- $EX_NUM: $EX_NAME --"
norminette -R CheckForbiddenSourceHeader $EX_PATH
gcc -Wall -Werror -Wextra $EX_PATH $TEST_DIR/$EX_NUM.c -o $EX_NUM
if [ $? -eq 0 ]; then
	./$EX_NUM
	if [ $? -eq 0 ]; then
		echo "success"
	else
		echo "error: test failed"
	fi
	rm $EX_NUM
else
	echo "error: gcc compile failed"
fi
echo ""

EX_NAME="ft_str_is_lowercase"
EX_NUM="ex04"
EX_PATH="$EX_DIR/$EX_NUM/$EX_NAME.c"
echo "-- $EX_NUM: $EX_NAME --"
norminette -R CheckForbiddenSourceHeader $EX_PATH
gcc -Wall -Werror -Wextra $EX_PATH $TEST_DIR/$EX_NUM.c -o $EX_NUM
if [ $? -eq 0 ]; then
	./$EX_NUM
	if [ $? -eq 0 ]; then
		echo "success"
	else
		echo "error: test failed"
	fi
	rm $EX_NUM
else
	echo "error: gcc compile failed"
fi
echo ""

EX_NAME="ft_str_is_uppercase"
EX_NUM="ex05"
EX_PATH="$EX_DIR/$EX_NUM/$EX_NAME.c"
echo "-- $EX_NUM: $EX_NAME --"
norminette -R CheckForbiddenSourceHeader $EX_PATH
gcc -Wall -Werror -Wextra $EX_PATH $TEST_DIR/$EX_NUM.c -o $EX_NUM
if [ $? -eq 0 ]; then
	./$EX_NUM
	if [ $? -eq 0 ]; then
		echo "success"
	else
		echo "error: test failed"
	fi
	rm $EX_NUM
else
	echo "error: gcc compile failed"
fi
echo ""

EX_NAME="ft_str_is_printable"
EX_NUM="ex06"
EX_PATH="$EX_DIR/$EX_NUM/$EX_NAME.c"
echo "-- $EX_NUM: $EX_NAME --"
norminette -R CheckForbiddenSourceHeader $EX_PATH
gcc -Wall -Werror -Wextra $EX_PATH $TEST_DIR/$EX_NUM.c -o $EX_NUM
if [ $? -eq 0 ]; then
	./$EX_NUM
	if [ $? -eq 0 ]; then
		echo "success"
	else
		echo "error: test failed"
	fi
	rm $EX_NUM
else
	echo "error: gcc compile failed"
fi
echo ""

EX_NAME="ft_strupcase"
EX_NUM="ex07"
EX_PATH="$EX_DIR/$EX_NUM/$EX_NAME.c"
echo "-- $EX_NUM: $EX_NAME --"
norminette -R CheckForbiddenSourceHeader $EX_PATH
gcc -Wall -Werror -Wextra $EX_PATH $TEST_DIR/$EX_NUM.c -o $EX_NUM
if [ $? -eq 0 ]; then
	./$EX_NUM
	if [ $? -eq 0 ]; then
		echo "success"
	else
		echo "error: test failed"
	fi
	rm $EX_NUM
else
	echo "error: gcc compile failed"
fi
echo ""

EX_NAME="ft_strlowcase"
EX_NUM="ex08"
EX_PATH="$EX_DIR/$EX_NUM/$EX_NAME.c"
echo "-- $EX_NUM: $EX_NAME --"
norminette -R CheckForbiddenSourceHeader $EX_PATH
gcc -Wall -Werror -Wextra $EX_PATH $TEST_DIR/$EX_NUM.c -o $EX_NUM
if [ $? -eq 0 ]; then
	./$EX_NUM
	if [ $? -eq 0 ]; then
		echo "success"
	else
		echo "error: test failed"
	fi
	rm $EX_NUM
else
	echo "error: gcc compile failed"
fi
echo ""

EX_NAME="ft_strcapitalize"
EX_NUM="ex09"
EX_PATH="$EX_DIR/$EX_NUM/$EX_NAME.c"
echo "-- $EX_NUM: $EX_NAME --"
norminette -R CheckForbiddenSourceHeader $EX_PATH
gcc -Wall -Werror -Wextra $EX_PATH $TEST_DIR/$EX_NUM.c -o $EX_NUM
if [ $? -eq 0 ]; then
	./$EX_NUM
	if [ $? -eq 0 ]; then
		echo "success"
	else
		echo "error: test failed"
	fi
	rm $EX_NUM
else
	echo "error: gcc compile failed"
fi
echo ""

EX_NAME="ft_strlcpy"
EX_NUM="ex10"
EX_PATH="$EX_DIR/$EX_NUM/$EX_NAME.c"
echo "-- $EX_NUM: $EX_NAME --"
norminette -R CheckForbiddenSourceHeader $EX_PATH
gcc -Wall -Werror -Wextra $EX_PATH $TEST_DIR/$EX_NUM.c -o $EX_NUM
if [ $? -eq 0 ]; then
	./$EX_NUM
	if [ $? -eq 0 ]; then
		echo "success"
	else
		echo "error: test failed"
	fi
	rm $EX_NUM
else
	echo "error: gcc compile failed"
fi
echo ""
