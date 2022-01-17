#include <string.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	dest[6];
	char	*result;

	result = ft_strncpy(dest, "42", 2);
	if (dest[0] != '4' || dest[1] != '2' || result != dest)
		return 1;

	result = ft_strncpy(dest, "hello", 2);
	if (dest[0] != 'h' || dest[1] != 'e' || result != dest)
		return 1;

	result = ft_strncpy(dest, "hi", 6);
	if (dest[0] != 'h' || dest[1] != 'i' || dest[3] != '\0' || dest[5] != '\0' || result != dest)
		return 1;

	result = ft_strncpy(dest, "hello world", 6);
	if (dest[0] != 'h' || dest[1] != 'e' || dest[3] != 'l' || dest[4] != 'o' || result != dest)
		return 1;

	return 0;
}
