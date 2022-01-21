#include <stdio.h>

int ft_iterative_factorial(int nb);

int	main(void)
{
	if(ft_iterative_factorial(0) != 1)
		return (1);

	if(ft_iterative_factorial(1) != 1)
		return (1);

	if(ft_iterative_factorial(4) != 24)
		return (1);

	if(ft_iterative_factorial(10) != 3628800)
		return (1);

	if(ft_iterative_factorial(-10) != 0)
		return (1);
}
