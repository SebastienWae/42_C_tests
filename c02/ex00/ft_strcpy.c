#include <string.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

/*
 * strcpy:
 * copies string from `src` to `dst`
 * includes the terminating null byte to `dest`
 * returns pointer to `dest`
 */
 

int	main(void)
{
	char	dest[255];

	printf("copy test:\n");
	ft_strcpy(dest, "copy test");
	if (strcmp(dest, "copy test") != 0)
	{
		printf("failed: src was not copied to dst\n");
		return (1);
	}
	else
		printf("ok\n");

	printf("empty src test:\n");
	ft_strcpy(dest, "");
	if (strcmp(dest, "") != 0)
	{
		printf("failed: does not handle empty src\n");
		return (1);
	}
	else
		printf("ok\n");

	printf("return value test:\n");
	if(ft_strcpy(dest, "42") != dest)
	{
		printf("failed: does not return dest");
		return (1);
	}
	else
		printf("ok\n");

	return (0);
}
