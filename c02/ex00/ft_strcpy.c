#include <string.h>

char *ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	*r;
	char	*r_test;
	char	dest;
	char	dest_test;

	dest = 'a';
	dest_test = 'a';
	r = ft_strcpy(&dest, "b");
	r_test = strcpy(&dest_test, "b");
	if (dest ==  'b' && dest == dest_test && *r == *r_test)
		return(0);
	else
		return(1);
}
