#include <string.h>
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	unsigned int	r1;
	unsigned int	r1_test;
	char	dest1[3];
	char	dest1_test[3];

	unsigned int	r2;
	unsigned int	r2_test;
	char	dest2[5];
	char	dest2_test[5];

	unsigned int	r3;
	char	dest3[3];

	r1 = ft_strlcpy(dest1, "42", 1);
	r1_test = strlcpy(dest1_test, "42", 1);
	if (r1 != r1_test || strcmp(dest1, dest1_test) != 0)
		return (1);


	r2 = ft_strlcpy(dest2, "42", 2);
	r2_test = strlcpy(dest2_test, "42", 2);
	if (r2 != r2_test || strcmp(dest2, dest2_test) != 0)
		return (1);

	r3 = ft_strlcpy(dest3, "4234", 5000000);
	printf("%s\n", dest3);

	return (0);
}
