#include <string.h>
#include <stdio.h>

char *ft_strlowcase(char *str);

/*
 * ft_strlowcase
 * change uppercase to lowercase
 * does not modify any other char
 * return str
 */

int	main(void)
{
	char	str1[] = "HELLO";
	char	str2[] = "hello";
	char	str3[] = "123HEl--LO";
	char	str4[] = "";

	printf("uppercase and return test:\n");
	if (strcmp(ft_strlowcase(str1), "hello") != 0)
	{
		printf("failed: does not change uppercase to lowercase or does not return str\n");
		return (1);
	}
	else
		printf("ok\n");

	printf("lowercase test:\n");
	if (strcmp(ft_strlowcase(str2), "hello") != 0)
	{
		printf("failed: modify lowercase char\n");
		return (1);
	}
	else
		printf("ok\n");

	printf("non alphabetic char test:\n");
	if (strcmp(ft_strlowcase(str3), "123hel--lo") != 0)
	{
		printf("failed: modify non alphabetic char\n");
		return (1);
	}
	else
		printf("ok\n");

	printf("empty string test:\n");
	if (strcmp(ft_strlowcase(str4), "") != 0)
	{
		printf("failed: does not return an empty str\n");
		return (1);
	}
	else
		printf("ok\n");

	return (0);
}
