void ft_putstr_non_printable(char *str);

int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu \x0f  vas bien \x9f \x81?");
}
