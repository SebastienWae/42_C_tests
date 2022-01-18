void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	if(a == 4 && b == 2)
		return(0);
	else
		return(1);
}
