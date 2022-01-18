#include <string.h>

int ft_strcmp(char *s1, char *s2);

int	main(void)
{
	if(ft_strcmp("42", "42") != 0)
		return (1);
	if(strcmp("42", "42") != 0)
		return (1);

	if(ft_strcmp("42\200", "42\0") != 1)
		return (1);
	if(strcmp("42\200", "42\0") != 1)
		return (1);

	if(ft_strcmp("abc", "ab") != 1)
		return (1);
	if(strcmp("abc", "ab") != 1)
		return (1);

	if(ft_strcmp("ab", "abc") != -1)
		return (1);
	if(strcmp("ab", "abc") != -1)
		return (1);

	return (0);
}
