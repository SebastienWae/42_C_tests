#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	t[4] = { 1, 2, 3, 4 };
	
	ft_rev_int_tab(t, 4);
	if(t[0] == 4 && t[1] == 3 && t[2] == 2 && t[3] == 1)
	   return 0;	
	else
		return 1;
}
