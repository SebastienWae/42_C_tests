#include <string.h>

char *ft_strupcase(char *str);

int	main(void)
{
	char	test1[] = "abc";
	char	test2[] = "ab12CD";
	char	test3[] = "1 3";

	ft_strupcase(test1);
	if (strcmp(test1, "ABC"))
		return (1);

	ft_strupcase(test2);
	if (strcmp(test2, "AB12CD"))
		return (1);

	ft_strupcase(test3);
	if (strcmp(test3, "1 3"))
		return (1);

	return (0);
}
