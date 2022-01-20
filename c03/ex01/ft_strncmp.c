#include <string.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

/*
 * ft_strncmp
 * compare `s1` to `s2` char by char up to `n`
 * return more than 0 if `s1` greater than `s2`
 * return 0 if `s1` is equal to `s2`
 * return less than 0 if `s1` lower than `s2`
 */

int	main(void)
{
	if(ft_strncmp("aaaaa", "aaaaz", 4) != 0)
	{
		printf("failed: you do not stop at n");
		return (1);
	}

	return (0);
}
