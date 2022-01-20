#include <stdio.h>

int ft_str_is_alpha(char *str);

/*
 * ft_str_is_alpha
 * return 1 if `str` only contain alphabetic chars
 * else return 0
 * if `str` is empty return 1
 */

int	main(void)
{

	printf("only alphabetic char test:\n");
	if(ft_str_is_alpha("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") != 1)
	{
		printf("failed: does not return 1 when all chars are alphabetic\n");
		return (1);
	}
	else
		printf("ok\n");

	printf("num char test:\n");
	if(ft_str_is_alpha("ab12sfd") != 0)
	{
		printf("failed: does not return 0 when some chars are numeric\n");
		return (1);
	}
	else
		printf("ok\n");

	printf("special char test:\n");
	if(ft_str_is_alpha("te-st") != 0)
	{
		printf("failed: does not return 0 when some chars are special\n");
		return (1);
	}
	else
		printf("ok\n");

	printf("empty str test:\n");
	if(ft_str_is_alpha("") != 1)
	{
		printf("failed: does not return 1 when str is empty\n");
		return (1);
	}
	else
		printf("ok\n");

	return (0);
}
