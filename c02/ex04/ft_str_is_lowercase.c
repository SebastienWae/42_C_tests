#include <stdio.h>

int ft_str_is_lowercase(char *str);

/*
 * ft_str_is_lowercase
 * return 1 if `str` only contain lowercase char
 * else return 0
 * if `str` is empty return 1
 */

int	main(void)
{

	printf("only lowercase char test:\n");
	if(ft_str_is_lowercase("abcdefghijklmnopqrstuvwxyz") != 1)
	{
		printf("failed: does not return 1 when all chars are lowercase\n");
		return (1);
	}
	else
		printf("ok\n");

	printf("uppercase char test:\n");
	if(ft_str_is_lowercase("aaABCdd") != 0)
	{
		printf("failed: does not return 0 when some chars are uppercase\n");
		return (1);
	}
	else
		printf("ok\n");

	printf("numeric char test:\n");
	if(ft_str_is_lowercase("ab12sfd") != 0)
	{
		printf("failed: does not return 0 when some chars are numeric\n");
		return (1);
	}
	else
		printf("ok\n");

	printf("special char test:\n");
	if(ft_str_is_lowercase("te-t") != 0)
	{
		printf("failed: does not return 0 when some chars are special\n");
		return (1);
	}
	else
		printf("ok\n");

	printf("empty str test:\n");
	if(ft_str_is_lowercase("") != 1)
	{
		printf("failed: does not return 1 when str is empty\n");
		return (1);
	}
	else
		printf("ok\n");

	return (0);
}
