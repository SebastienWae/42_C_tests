#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	if (ft_strncmp("42", "44", 1) != 0)
		return (1);
	if (strncmp("42", "44", 1) != 0)
		return (1);

	if (ft_strncmp("42\200", "42\0", 3) != 1)
		return (1);
	if (strncmp("42\200", "42\0", 3) != 1)
		return (1);

	if (ft_strncmp("abc", "ab", 2) != 0)
		return (1);
	if (strncmp("abc", "ab", 2) != 0)
		return (1);

	if (ft_strncmp("aaaaaa", "z", 1) != -1)
		return (1);
	if (strncmp("aaaaaa", "z", 1) != -1)
		return (1);

	return (0);
}
