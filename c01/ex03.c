void ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int div;
	int mod;

	a = 54;
	b = 10;
	ft_div_mod(a, b, &div, &mod);
	if(div == 5 && mod == 4)
		return 0;
	else
		return 1;
}
