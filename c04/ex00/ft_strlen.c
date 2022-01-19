#include <string.h>

int ft_strlen(char *str);

int	main(void)
{
	if(ft_strlen("hello") != strlen("hello"))
		return (1);

	if(ft_strlen("") != strlen(""))
		return (1);

	return (0);
}
