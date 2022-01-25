#include <stdio.h>
#include <limits.h>

int ft_is_prime(int nb);

int	main(void)
{
	if(ft_is_prime(0) != 0)
		return (1);

	if(ft_is_prime(1) != 0)
		return (1);

	if(ft_is_prime(2) != 1)
		return (1);

	if(ft_is_prime(11) != 1)
		return (1);
		
	if(ft_is_prime(97) != 1)
		return (1);

	if(ft_is_prime(200011327) != 1)
		return (1);
		
	if(ft_is_prime(4) != 0)
		return (1);

	if(ft_is_prime(12) != 0)
		return (1);

	if(ft_is_prime(99) != 0)
		return (1);

	if(ft_is_prime(INT_MAX - 1) != 0)
		return (1);
}
