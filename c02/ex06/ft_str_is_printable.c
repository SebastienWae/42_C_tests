int ft_str_is_printable(char *str);

int	main(void)
{
	if(ft_str_is_printable("ab c35~") != 1)
		return (1);
	if(ft_str_is_printable("") != 1)
		return (1);
	if(ft_str_is_printable("\0") != 1)
		return (1);

	return (0);
}
