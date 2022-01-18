int ft_str_is_lowercase(char *str);

int	main(void)
{
	if(ft_str_is_lowercase("abd") != 1)
		return (1);
	if(ft_str_is_lowercase("") != 1)
		return (1);
	if(ft_str_is_lowercase("ABcd") == 1)
		return (1);
	if(ft_str_is_lowercase("abc123") == 1)
		return (1);

	return (0);
}
