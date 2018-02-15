int	ft_antidote(int i, int j, int k)
{
	if ((i > k && i < j) || (i < k && i > j))
		return (i);
	else if ((j > k && j < i) || (j < k && j > i))
		return (j);
	return (k);
}
