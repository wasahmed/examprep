
int		max(int* tab, unsigned int len)
{
	int		max;
	int		i;
	if (!tab)
		return (0);
	i = 0;
	max = tab[i];
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
