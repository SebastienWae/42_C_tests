#include <stdio.h>
#include <limits.h>

int ft_find_next_prime(int nb);

int	main(void)
{
	if(ft_find_next_prime(2) != 2)
		return (1);

	if(ft_find_next_prime(11) != 11)
		return (1);
		
	if(ft_find_next_prime(4) != 5)
		return (1);

	if(ft_find_next_prime(10) != 11)
		return (1);

	if(ft_find_next_prime(INT_MIN) != 2)
		return (1);
}
