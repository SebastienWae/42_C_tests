#include <string.h>
#include <stdio.h>

char *ft_strcapitalize(char *str);

int	main(void)
{
	char	test1[] = "hello";
	char	test2[] = "salut, Comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(test1);
	if(strcmp(test1, "Hello"))
		return (1);

	ft_strcapitalize(test2);
	printf("%s\n", test2);
	if(strcmp(test2, "Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un"))
		return (1);


	return (0);
}
