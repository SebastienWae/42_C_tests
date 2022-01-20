#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

/*
 * strncpy
 * copy at most `n` char from `src` to `dest`
 * if `src` smaller than `n` the remainder is filled with \0
 * does not terminate with \0
 * return `dest`
 */

int	main(void)
{
	char	dest[20];

	printf("copy test:\n");
	ft_strncpy(dest, "hello", 6);
	if (strcmp(dest, "hello") != 0)
	{
		printf("failed: src was not copied to dest\n");
		return (1);
	}
	else
		printf("ok\n");

	printf("copy up to n test:\n");
	ft_strncpy(dest, "hello", 2);
	dest[2] = '\0';
	if (strcmp(dest, "he") != 0)
	{
		printf("failed: src was not copied up to n to dest\n");
		return (1);
	}
	else
		printf("ok\n");

	printf("add NUL char test:\n");
	ft_strncpy(dest, "hello", 10);
	if (strcmp(dest, "hello\0\0\0\0\0") != 0)
	{
		printf("failed: NUL char are not added if src is smaller than n\n");
		return (1);
	}
	else
		printf("ok\n");

	printf("does not terminate with NUL test:\n");
	ft_strncpy(dest, "hello", 2);
	if (dest[2] == '\0')
	{
		printf("failed: extra NUL char was added\n");
		return (1);
	}
	else
		printf("ok\n");

	printf("return value test:\n");
	ft_strncpy(dest, "42", 3);
	if (strcmp(dest, "42"))
	{
		printf("failed: does not return dest");
		return (1);
	}
	else
		printf("ok\n");

	return (0);
}
