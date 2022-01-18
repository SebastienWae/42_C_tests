#include <string.h>

char *ft_strlowcase(char *str);

int	main(void)
{
	char	test1[] = "ABC";
	char	test2[] = "AB12cd";
	char	test3[] = "1 3";

	ft_strlowcase(test1);
	if (strcmp(test1, "abc"))
		return (1);

	ft_strlowcase(test2);
	if (strcmp(test2, "ab12cd"))
		return (1);

	ft_strlowcase(test3);
	if (strcmp(test3, "1 3"))
		return (1);

	return (0);
}
