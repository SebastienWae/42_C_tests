#include <string.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2);

/*
 * strcmp
 * compare `s1` to `s2` char by char
 * return more than 0 if `s1` greater than `s2`
 * return 0 if `s1` is equal to `s2`
 * return less than 0 if `s1` lower than `s2`
 */

int	main(void)
{
	if(ft_strcmp("hello", "hello") != 0)
	{
		printf("failed: does not return 0 when s1 is equal to s2\n");
		return (1);
	}

	if(ft_strcmp("zzzz", "zazz") <= 0)
	{
		printf("failed: does not return more than 0 when s1 is greater than s2 (z vs a)\n");
		return (1);
	}

	if(ft_strcmp("zzzz", "zzz") <= 0)
	{
		printf("failed: does not return more than 0 when s1 is greater than s2 (shorter str)\n");
		return (1);
	}

	if(ft_strcmp("\200", "\1") <= 0)
	{
		printf("failed: does not return more han 0 when s1 is greater to s2 (unsigned char)\n");
		return (1);
	}

	if(ft_strcmp("zazz", "zzzz") >= 0)
	{
		printf("failed: does not return less than 0 when s1 is lower than s2 (a vs z)\n");
		return (1);
	}

	if(ft_strcmp("aaa", "aaaa") >= 0)
	{
		printf("failed: does not return less than 0 when s1 is lower than s2 (shorter str)\n");
		return (1);
	}

	if(ft_strcmp("\1", "\200") >= 0)
	{
		printf("failed: does not return less than 0 when s1 is lower to s2 (unsigned char)\n");
		return (1);
	}

	return (0);
}
