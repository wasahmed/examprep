#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	int				tmp;
	unsigned int 	i;
	unsigned int 	j;

	i = 0;
	while (i < size - 1)
	{
		j = i;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	main()
{
	unsigned int size = 5;
	int tab[5] = {3,2,1,5,4};
	int i = 0;
	sort_int_tab(tab, size);
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return(0);
}
