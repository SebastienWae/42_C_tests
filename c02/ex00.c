char *ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	a;
	char	b;
	char	*r;

	a = 'a';
	b = 'b';
	r = ft_strcpy(&a, &b);
	if(a == 'b' && r == &a)
		return(0);
	else
		return(1);
}
