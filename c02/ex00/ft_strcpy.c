#include <string.h>

char *ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	*r;
	char	*r_test;
	char	dest[3];
	char	dest_test[3];

	r = ft_strcpy(dest, "42");
	r_test = strcpy(dest_test, "42");
	if (strcmp(r, r_test) != 0)
		return (1);
	return (0);
}
