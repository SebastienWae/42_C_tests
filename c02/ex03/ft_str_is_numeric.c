int ft_str_is_numeric(char *str);

int	main(void)
{
	if(ft_str_is_numeric("123") != 1)
		return (1);
	if(ft_str_is_numeric("") != 1)
		return (1);
	if(ft_str_is_numeric("123abc") == 1)
		return (1);

	return (0);
}
