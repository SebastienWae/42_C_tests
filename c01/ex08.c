#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[4] = { 234, 3, 24, 1 };

	ft_sort_int_tab(tab, 4);
	printf("%d\n", tab[0]);
	printf("%d\n", tab[1]);
	printf("%d\n", tab[2]);
	printf("%d\n", tab[3]);
	if (tab[0] == 1 && tab[1] == 3 && tab[2] == 24 && tab[3] == 234)
	   return 0;
	else
		return 1;
}
