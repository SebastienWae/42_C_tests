#include <limits.h>
#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int **range;

	range = malloc(sizeof(int*));
	if(ft_ultimate_range(range, 0, 10) != 9 || (*range)[0] != 1 || (*range)[8] != 9)
		return (1);
	free(range);

	range = malloc(sizeof(int*));
	if(ft_ultimate_range(range, -20, -10) != 9 || (*range)[0] != -19 || (*range)[8] != -11)
		return (1);
	free(range);

	range = malloc(sizeof(int*));
	if(ft_ultimate_range(range, 10, 0) != -1)
		return (1);
	free(range);

	range = malloc(sizeof(int*));
	if(ft_ultimate_range(range, 0, 0) != -1)
		return (1);
	free(range);

	range = malloc(sizeof(int*));
	if(ft_ultimate_range(range, 0, 1) != -1)
		return (1);
	free(range);

	range = malloc(sizeof(int*));
	if(ft_ultimate_range(range, 0, 2) != 1)
		return (1);
	free(range);

	//if(ft_ultimate_range(INT_MIN, INT_MAX)[0] != INT_MIN + 1)
	//	return (1);
}
