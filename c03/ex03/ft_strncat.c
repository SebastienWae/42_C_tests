#include <string.h>
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

/*
 * ft_strncat
 * append `s2` to `s1` up to `n`
 * add terminating NUL
 * return pointer to `s1`
 */

int	main(void)
{
	char	dest[20] = "hello";
	char	dest2[20] = "hello";

	ft_strncat(dest, "world", 2);
	if (strcmp(dest, "hellowo") != 0)
	{
		printf("failed: does not append src to dst or append more than n char");
		return (1);
	}

	ft_strncat(dest2, "aaaa", 1);
	if (dest2[6] != '\0')
	{
		printf("failed: does not add terminating NUL");
		return (1);
	}

	return (0);
}
