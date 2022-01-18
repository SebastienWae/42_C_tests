#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	*r1;
	char	*r1_test;
	char	dest1[3];
	char	dest1_test[3];

	char	*r2;
	char	*r2_test;
	char	dest2[10];
	char	dest2_test[10];

	char	*r3;
	char	*r3_test;
	char	dest3[100];
	char	dest3_test[100];

	r1 = ft_strncpy(dest1, "42", 1);
	r1_test = strncpy(dest1_test, "42", 1);
	if (strcmp(r1, r1_test) != 0)
		return (1);

	r2 = ft_strncpy(dest2, "42", 10);
	r2_test = strncpy(dest2_test, "42", 10);
	if (strcmp(r2, r2_test) != 0)
		return (1);

	r3 = ft_strncpy(dest3, "42", 10);
	r3_test = strncpy(dest3_test, "42", 10);
	if (strcmp(r3, r3_test) != 0)
		return (1);

	return (0);
}
