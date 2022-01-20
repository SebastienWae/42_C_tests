#include <stdio.h>

int ft_str_is_printable(char *str);

/*
 * ft_str_is_printable
 * return 1 if `str` only contain printable char
 * else return 0
 * if `str` is empty return 1
 */

int	main(void)
{

	printf("only printable char test:\n");
	if(ft_str_is_printable("01234567890-AB CD~EFG+HIJ-KLMNOPQRSTUVWXYZ") != 1)
	{
		printf("failed: does not return 1 when all chars are printable\n");
		return (1);
	}
	else
		printf("ok\n");

	printf("non-printable char test:\n");
	if(ft_str_is_printable("abc12\tasdf") != 0)
	{
		printf("failed: does not return 0 when some chars are non-printable\n");
		return (1);
	}
	else
		printf("ok\n");

	printf("empty str test:\n");
	if(ft_str_is_printable("") != 1)
	{
		printf("failed: does not return 1 when str is empty\n");
		return (1);
	}
	else
		printf("ok\n");

	return (0);
}
