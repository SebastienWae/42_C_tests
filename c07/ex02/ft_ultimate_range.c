#include <limits.h>
#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int **range;

	range = malloc(sizeof(int*));
	if(ft_ultimate_range(range, 0, 10) != 10 && (*range)[0] != 0 && (*range)[9] != 9)
		return (1);
	free(range);

	range = malloc(sizeof(int*));
	if(ft_ultimate_range(range, -20, -10) != 10 && (*range)[0] != -20 && (*range)[9] != -11)
		return (1);
	free(range);

	range = malloc(sizeof(int*));
	if(ft_ultimate_range(range, 10, 0) != 0)
		return (1);
	free(range);

	range = malloc(sizeof(int*));
	if(ft_ultimate_range(range, 0, 0) != 0)
		return (1);
	free(range);

	range = malloc(sizeof(int*));
	if(ft_ultimate_range(range, 0, 1) != 1 && (*range)[0] != 0)
		return (1);
	free(range);

	range = malloc(sizeof(int*));
	if(ft_ultimate_range(range, 0, 2) != 2)
		return (1);
	free(range);

	range = malloc(sizeof(int*));
	if(ft_ultimate_range(range, INT_MIN, INT_MAX) != -1)
		return (1);
}
