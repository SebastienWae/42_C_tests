#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *ft_strjoin(int size, char **strs, char *sep);

/*
 * concat all chains in `strs`, separated by `sep`
 * `size` is size of strs
 * if `size` is 0 return empty chain of char (malloc)
 */

int	main(void)
{
	char	**strs;

	strs = malloc(sizeof(char*) * 3);
	strs[0] = malloc(sizeof(char) * 10);
	strs[1] = malloc(sizeof(char) * 10);
	strs[2] = malloc(sizeof(char) * 10);

	strs[0][0] = 'h';
	strs[0][1] = 'e';
	strs[0][2] = 'l';
	strs[0][3] = 'l';
	strs[0][4] = 'o';
	strs[0][5] = '\0';

	strs[1][0] = 'w';
	strs[1][1] = 'o';
	strs[1][2] = 'r';
	strs[1][3] = 'l';
	strs[1][4] = 'd';
	strs[1][5] = '\0';

	strs[2][0] = 'h';
	strs[2][1] = 'e';
	strs[2][2] = 'l';
	strs[2][3] = 'l';
	strs[2][4] = 'o';
	strs[2][5] = '\0';
	
	if (strcmp(ft_strjoin(3, strs, "%-%"), "hello%-%world%-%hello") != 0)
		return (1);
}
