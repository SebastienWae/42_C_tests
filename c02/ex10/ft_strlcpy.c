#include <string.h>
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

/*
 * strlcpy
 * NUL termination if enough room (must be included in size)
 * add NUL termination if size is not 0
 * copies up to `size` - 1 from `src` to `dst`
 * returns the total length of src
 */

int	main(void)
{
	char				dest[255];
	unsigned int		r;

	printf("copy test:\n");
	ft_strlcpy(dest, "hello", 6);
	if (strcmp(dest, "hello") != 0)
	{
		printf("failed: src was not copied to dest\n");
		return (1);
	}
	else
		printf("ok\n");

	printf("truncate test:\n");
	ft_strlcpy(dest, "hello", 2);
	if (strcmp(dest, "h") != 0)
	{
		printf("failed: src was not properly truncated\n");
		printf("expected: h");
		printf("copied: %s", dest);
		return (1);
	}
	else
		printf("ok\n");

	printf("size is 0 test:\n");
	ft_strlcpy(dest, "hello", 0);
	if (dest[0] == '\0')
	{
		printf("failed: NUL char was added\n");
		return (1);
	}
	else
		printf("ok\n");

	printf("size bigger than src test:\n");
	ft_strlcpy(dest, "hello", 10);
	if (strcmp(dest, "hello") != 0)
	{
		printf("failed: does not stop at the end of str\n");
		return (1);
	}
	else
		printf("ok\n");

	printf("return src lenght test:\n");
	r = ft_strlcpy(dest, "hello", 3);
	if (r != 5)
	{
		printf("failed: does not return the lenght of str\n");
		return (1);
	}
	else
		printf("ok\n");

	return (0);
}
