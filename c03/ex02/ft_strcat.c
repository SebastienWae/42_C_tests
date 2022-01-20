#include <string.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src);

/*
 * ft_strcat
 * append `s2` to `s1`
 * add terminating NUL
 * return pointer to `s1`
 */

int	main(void)
{
	char	dest[20] = "hello";
	char	dest2[20] = "hello";

	ft_strcat(dest, "world");
	if (strcmp(dest, "helloworld") != 0)
	{
		printf("failed: does not append src to dest");
		return (1);
	}

	ft_strcat(dest2, "aaaaaaaaaaaaaa");
	if (dest2[19] != '\0')
	{
		printf("failed: does not add terminating NUL");
		return (1);
	}

	return (0);
}
