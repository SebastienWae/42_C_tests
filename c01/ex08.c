void ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	char	*tab = { 732, 3, 24, 1 };

	ft_sort_int_tab(tab, 4);
	if (tab[0] == 1 && tab[1] == 3 && tab[2] == 24 && tab[3] == 732)
	   return 0;
	else
		return 1;
}
