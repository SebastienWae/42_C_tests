#include <stdio.h>

int ft_recursive_power(int nb, int power);

int	main(void)
{
	if(ft_recursive_power(10, 2) != 100)
		return (1);

	if(ft_recursive_power(3, 4) != 81)
		return (1);

	if(ft_recursive_power(12, 8) != 429981696)
		return (1);

	if(ft_recursive_power(10, -2) != 0)
		return (1);

	if(ft_recursive_power(10, 0) != 1)
		return (1);
}
