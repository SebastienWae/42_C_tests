char *ft_strcapitalize(char *str);

int	main(void)
{
	char	test1[] = "hello";
	char	test2[] = "salut, Comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(test1);
	if(test1[0] != 'H' || test1[4] != 'o')
		return (1);

	ft_strcapitalize(test2);
	if(test2[0] != 'S' || test2[7] != 'C' || test2[10] != 'm' || test2[24] != '4' || test2[40] != 'D' || test2[55] != '+' || test2[59] != 'U')
		return (1);

	return (0);
}
