#include <stdio.h>

int ft_str_is_uppercase(char *str);

/*
 * ft_str_is_uppercase
 * return 1 if `str` only contain uppercase char
 * else return 0
 * if `str` is empty return 1
 */

int	main(void)
{

	printf("only uppercase char test:\n");
	if(ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUVWXYZ") != 1)
	{
		printf("failed: does not return 1 when all chars are uppercase\n");
		return (1);
	}
	else
		printf("ok\n");

	printf("lowercase char test:\n");
	if(ft_str_is_uppercase("aaABCdd") != 0)
	{
		printf("failed: does not return 0 when some chars are lowercase\n");
		return (1);
	}
	else
		printf("ok\n");

	printf("numeric char test:\n");
	if(ft_str_is_uppercase("AB12SFD") != 0)
	{
		printf("failed: does not return 0 when some chars are numeric\n");
		return (1);
	}
	else
		printf("ok\n");

	printf("special char test:\n");
	if(ft_str_is_uppercase("TE-T") != 0)
	{
		printf("failed: does not return 0 when some chars are special\n");
		return (1);
	}
	else
		printf("ok\n");

	printf("empty str test:\n");
	if(ft_str_is_uppercase("") != 1)
	{
		printf("failed: does not return 1 when str is empty\n");
		return (1);
	}
	else
		printf("ok\n");

	return (0);
}
