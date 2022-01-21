#include <stdio.h>

int ft_sqrt(int nb);

int	main(void)
{
	if(ft_sqrt(1) != 1)
		return (1);

	if(ft_sqrt(2) != 0)
		return (1);

	if(ft_sqrt(9) != 3)
		return (1);

	if(ft_sqrt(36) != 6)
		return (1);

	if(ft_sqrt(15) != 0)
		return (1);

	if(ft_sqrt(-10) != 0)
		return (1);
}
