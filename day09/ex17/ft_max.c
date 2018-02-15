int		ft_max(int *tab, int lenght)
{
	int	i;
	int	max;

	i = 0;
	max = -2147483648;
	while (i < lenght)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}
