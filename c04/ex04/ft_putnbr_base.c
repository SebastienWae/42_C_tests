void ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	ft_putnbr_base(123, "0123456789ABCDEF"); // 7B
	ft_putnbr_base(123, "01"); // 1111011
	ft_putnbr_base(-6546546, "01"); // -11000111110010001110010

	ft_putnbr_base(123, "1");
	ft_putnbr_base(123, "abcda");
	ft_putnbr_base(123, "0+1");
}
