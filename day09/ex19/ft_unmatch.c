int	ft_unmatch(int *tab, int length)
{
	int	i;
	int	c;

	i = 0;
	while (i < length)
	{
		while (j < lemgth)
		{
			if (tab[i] == tab[j])
				c++;
			if (c % 2 != 0)
				return (tab[i])
			j++;
		}
		i++;
	}
	return (0);
}
