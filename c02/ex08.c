char *ft_strlowcase(char *str);

int	main(void)
{
	char	test1[] = "ABC";
	char	test2[] = "AB12cd";
	char	test3[] = "1 3";

	ft_strlowcase(test1);
	if (test1[0] != 'a' && test1[2] != 'b' && test1[3] != 'c')
		return (1);

	ft_strlowcase(test2);
	if (test2[0] != 'a' && test2[2] != '1' && test2[4] != 'c')
		return (1);

	ft_strlowcase(test3);
	if (test3[0] != '1' && test3[1] != ' ' && test3[2] != '3')
		return (1);

	return (0);
}
