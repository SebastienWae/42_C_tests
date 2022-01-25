#include <limits.h>

int *ft_range(int min, int max);

int	main(void)
{

	if(ft_range(0, 10)[0] != 0)
		return (1);

	if(ft_range(0, 10)[5] != 5)
		return (1);

	if(ft_range(0, 10)[9] != 9 )
		return (1);

	if(ft_range(-20, -10)[9] != -11)
		return (1);

	if(ft_range(10, 0) != 0)
		return (1);
	
	if(ft_range(10, 10) != 0)
		return (1);

	if(ft_range(0, 1)[0] != 0)
		return (1);

	if(ft_range(0, 2)[0] != 0)
		return (1);

	if(ft_range(INT_MIN, INT_MAX)[0] != INT_MIN)
		return (1);
}
