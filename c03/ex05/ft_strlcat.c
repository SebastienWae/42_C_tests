#include <string.h>
#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			dest[20] = "hello";
	char			dest_test[20] = "hello";
	unsigned int	r;
	unsigned int	r_test;

	r = ft_strlcat(dest, "world", 20); 	
	r_test = strlcat(dest_test, "world", 20); 	
	if (strcmp(dest, dest_test) != 0)
		return (1);
	
	r = ft_strlcat(dest, "world", 2); 	
	r_test = strlcat(dest_test, "world", 2); 	
	if (strcmp(dest, dest_test) != 0)
		return (1);

	r = ft_strlcat(dest, "world", 0); 	
	r_test = strlcat(dest_test, "world", 0); 	
	if (strcmp(dest, dest_test) != 0)
		return (1);

	return (0);
}
