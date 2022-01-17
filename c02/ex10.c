#include <string.h>
#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dest1[7];
	char	dest1_test[7];
	char	dest2[2];
	char	dest2_test[2];

	ft_strlcpy(dest1, "hello", 6); 
	if (ft_strlcpy(dest1, "hello", 6) != strlcpy(dest1_test, "hello", 6) || dest1[0] != 'h' || dest1[6] != '\0')
		return (1);

	ft_strlcpy(dest2, "hello", 2); 
	if (ft_strlcpy(dest2, "hello", 2) != strlcpy(dest2_test, "hello", 2) || dest2[0] != 'h' || dest2[1] != '\0')
		return (1);

	return (0);
}
