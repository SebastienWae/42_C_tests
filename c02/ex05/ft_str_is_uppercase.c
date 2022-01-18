int ft_str_is_uppercase(char *str);

int	main(void)
{
	if(ft_str_is_uppercase("ABC") != 1)
		return (1);
	if(ft_str_is_uppercase("") != 1)
		return (1);
	if(ft_str_is_uppercase("ABcd") == 1)
		return (1);
	if(ft_str_is_uppercase("ABC123") == 1)
		return (1);

	return (0);
}
