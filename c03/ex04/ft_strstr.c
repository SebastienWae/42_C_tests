#include <string.h>
#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	*r;
	char	*r_test;

	r = ft_strstr("hello world", "wo");
	r_test = strstr("hello world", "wo");
	if (strcmp(r, r_test) != 0)
		return (1);

	r = ft_strstr("hello world", "");
	r_test = strstr("hello world", "");
	if (strcmp(r, r_test) != 0)
		return (1);

	r = ft_strstr("hello world", "zz");
	r_test = strstr("hello world", "zz");
	if (r != r_test)
		return (1);

	return (0);
}
