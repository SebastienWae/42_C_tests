char *ft_strupcase(char *str);

int	main(void)
{
	char	test1[] = "abc";
	char	test2[] = "ab12CD";
	char	test3[] = "1 3";

	ft_strupcase(test1);
	if (test1[0] != 'A' || test1[1] != 'B' || test1[2] != 'C')
		return (1);

	ft_strupcase(test2);
	if (test2[0] != 'A' || test2[2] != '1' || test2[4] != 'C')
		return (1);

	ft_strupcase(test3);
	if (test3[0] != '1' || test3[1] != ' ' || test3[2] != '3')
		return (1);

	return (0);
}
