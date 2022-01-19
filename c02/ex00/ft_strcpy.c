#include <string.h>

char *ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	*r;
	char	*r_test;
	char	dest1[3];
	char	dest_test1[3];
	char	dest2[9];
	char	dest_test2[9];

	r = ft_strcpy(dest1, "42");
	r_test = strcpy(dest_test1, "42");
	if (strcmp(r, r_test) != 0 && strcmp(dest1, dest_test1))
		return (1);

	r = ft_strcpy(dest2, "42");
	r_test = strcpy(dest_test2, "42");
	if (strcmp(r, r_test) != 0 && strcmp(dest2, dest_test2))
		return (1);

	return (0);
}
