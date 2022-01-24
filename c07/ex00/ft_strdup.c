#include <string.h>

char *ft_strdup(char *src);

int	main(void)
{
	if(strcmp("hello", ft_strdup("hello")) != 0)	
		return (1);

	if(strcmp("", ft_strdup("")) != 0)	
		return (1);
}
