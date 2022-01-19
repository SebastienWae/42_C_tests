#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	int	r;
	
	r = ft_atoi("123");
	if (r != 123)
		return (1);

	r = ft_atoi("123b");
	if (r != 123)
		return (1);

	r = ft_atoi("1;23b");
	if (r != 1)
		return (1);

	r = ft_atoi("-123");
	if (r != -123)
		return (1);

	r = ft_atoi("+123");
	if (r != 123)
		return (1);
	
	r = ft_atoi("12+3");
	if (r != 123)
		return (1);

	r = ft_atoi("      123");
	if (r != 123)
		return (1);

	r = ft_atoi("  12   3");
	if (r != 12)
		return (1);

	r = ft_atoi("---+--+1234ab567");
	if (r != -1234)
		return (1);

	return (0);
}
