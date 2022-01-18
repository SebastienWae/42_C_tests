#include <string.h>
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	dest[20] = "hello";
	char	dest_test[20] = "hello";

	ft_strncat(dest, "world", 2);
	strncat(dest_test, "world", 2);
	if (strcmp(dest, "hellowo") != 0 && strcmp(dest, dest_test) != 0)
		return (1);

	return (0);
}
