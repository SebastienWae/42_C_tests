#include <string.h>
#include <stdio.h>

char *ft_strupcase(char *str);

/*
 * ft_strupcase
 * change lowercase to uppercase
 * does not modify any other char
 * return str
 */

int	main(void)
{
	printf("lowercase and return test:\n");
	if (strcmp(ft_strupcase("hello"), "HELLO") != 0)
	{
		printf("failed: does not change lowercase to uppercase or does not return str\n");
		return (1);
	}
	else
		printf("ok\n");

	printf("uppercase test:\n");
	if (strcmp(ft_strupcase("HELLO"), "HELLO") != 0)
	{
		printf("failed: modify uppercase char\n");
		return (1);
	}
	else
		printf("ok\n");

	printf("non alphabetic char test:\n");
	if (strcmp(ft_strupcase("123hel--lo"), "123HEL--LO") != 0)
	{
		printf("failed: modify non alphabetic char\n");
		return (1);
	}
	else
		printf("ok\n");

	printf("empty string test:\n");
	if (strcmp(ft_strupcase(""), "") != 0)
	{
		printf("failed: does not return an empty str\n");
		return (1);
	}
	else
		printf("ok\n");

	return (0);
}
