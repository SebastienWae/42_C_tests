int ft_fibonacci(int index);

int	main(void)
{
	if(ft_fibonacci(0) != 0)
		return (1);

	if(ft_fibonacci(10) != 55)
		return (1);

	if(ft_fibonacci(16) != 987)
		return (1);

	if(ft_fibonacci(-16) != -1)
		return (1);
}
