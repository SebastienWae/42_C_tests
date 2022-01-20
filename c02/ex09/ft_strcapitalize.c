#include <string.h>
#include <stdio.h>

char *ft_strcapitalize(char *str);

/*
 * ft_strcapitalize
 * change first letter of each word to uppercase
 * change letter that are not first of the word to lowercase
 * word start at frist alphanum char after a non-alphanum char
 * return `str`
 */

int	main(void)
{
	char	str1[] = "hello";
	char	str2[] = "hELlo";
	char	str3[] = "42helLO";
	char	str4[] = "hELlo;woRLd";
	char	str5[] = "\t$t@^/3{DF";
	char	str6[] = "ReKt17+LOl MdR Mdr 4242l42";
	char	str7[] = "";

	printf("capitalize 1 word and return test:\n");
	if (strcmp(ft_strcapitalize(str1), "Hello") != 0)
	{
		printf("failed: does not capitalize a single word or return str\n");
		printf("expected: Hello\n");
		printf("result: %s\n", str1);
		return (1);
	}
	else
		printf("ok\n");

	printf("lowercase all letters that are not the first of a word test:\n");
	if (strcmp(ft_strcapitalize(str2), "Hello") != 0)
	{
		printf("failed: does not lowercase letters that not first of a word\n");
		printf("expected: Hello\n");
		printf("result: %s\n", str2);
		return (1);
	}
	else
		printf("ok\n");

	printf("word start with numeric char test:\n");
	if (strcmp(ft_strcapitalize(str3), "42hello") != 0)
	{
		printf("failed: does not handle words that start with a number\n");
		printf("expected: 42hello\n");
		printf("result: %s\n", str3);
		return (1);
	}
	else
		printf("ok\n");

	printf("word are separated with non alphanumeric char test:\n");
	if (strcmp(ft_strcapitalize(str4), "Hello;World") != 0)
	{
		printf("failed: does not handle words that are separated with a non alphanumeric char \n");
		printf("expected: Hello;World\n");
		printf("result: %s\n", str4);
		return (1);
	}
	else
		printf("ok\n");

	printf("special case test:\n");
	if (strcmp(ft_strcapitalize(str5), "\t$T@^/3{Df") != 0)
	{
		printf("failed:\n");
		printf("expected: \t$T@^/3{Df\n");
		printf("result: %s\n", str5);
		return (1);
	}
	else
		printf("ok\n");

	printf("special case test:\n");
	if (strcmp(ft_strcapitalize(str6), "Rekt17+Lol Mdr Mdr 4242l42") != 0)
	{
		printf("failed:\n");
		printf("expected: \t$T@^/3{Df\n");
		printf("result: %s\n", str6);
		return (1);
	}
	else
		printf("ok\n");

	printf("special case test:\n");
	if (strcmp(ft_strcapitalize(str7), "") != 0)
	{
		printf("failed:\n");
		printf("expected: \n");
		printf("result: %s\n", str7);
		return (1);
	}
	else
		printf("ok\n");

	return (0);
}
