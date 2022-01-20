#include <stdio.h>

int ft_str_is_numeric(char *str);

/*
 * ft_str_is_numeric
 * return 1 if `str` only contain numeric chars
 * else return 0
 * if `str` is empty return 1
 */

int	main(void)
{

	printf("only numeric char test:\n");
	if(ft_str_is_numeric("0123456789") != 1)
	{
		printf("failed: does not return 1 when all chars are numeric\n");
		return (1);
	}
	else
		printf("ok\n");

	printf("alphabetic char test:\n");
	if(ft_str_is_numeric("ab12sfd") != 0)
	{
		printf("failed: does not return 0 when some chars are alphabetic\n");
		return (1);
	}
	else
		printf("ok\n");

	printf("special char test:\n");
	if(ft_str_is_numeric("4-2") != 0)
	{
		printf("failed: does not return 0 when some chars are special\n");
		return (1);
	}
	else
		printf("ok\n");

	printf("empty str test:\n");
	if(ft_str_is_numeric("") != 1)
	{
		printf("failed: does not return 1 when str is empty\n");
		return (1);
	}
	else
		printf("ok\n");

	return (0);
}
