void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 24;

	ft_swap(&a, &b);

	if (a == 24 && b == 42)
		return 0;
	else
		return 1;
}
