int ft_str_is_alpha(char *str);

int	main(void)
{
	if(ft_str_is_alpha("abcd") != 1)
		return (1);
	if(ft_str_is_alpha("") != 1)
		return (1);
	if(ft_str_is_alpha("abc123") == 1)
		return (1);

	return (0);

}
