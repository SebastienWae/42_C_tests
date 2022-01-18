#include <string.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src);

int	main(void)
{
	char	dest[20] = "hello";
	char	dest_test[20] = "hello";

	ft_strcat(dest, "world");
	strcat(dest_test, "world");
	if (strcmp(dest, "helloworld") != 0 && strcmp(dest, dest_test) != 0)
		return (1);

	return (0);
}
