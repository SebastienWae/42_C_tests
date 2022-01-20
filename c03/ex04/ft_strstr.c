#include <string.h>
#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

/*
 * ft_strstr
 * locate the first occurrence of `to_find` in `str`
 * if `to_find` is empty return `str`
 * if `to_find` is not in `str` return 0
 * else return pointer to first char of the first occurrence
 */

int	main(void)
{
	char	test[] = "hello world";

	if(ft_strstr(test, "wo") != &test[6])
	{
		printf("failed: does not return pointer to first occurrence\n");
		return (1);
	}

	if(ft_strstr(test, "") != test)
	{
		printf("failed: does not return str if to_find is empty\n");
		return (1);
	}

	if(ft_strstr(test, "zz") != 0)
	{
		printf("failed: does not return 0 when to_find is not in str");
		return (1);
	}

	return (0);
}
