unsigned int	ft_active_bits(int value)
{
	int	c;

	c = 0;
	if (value < 0)
		value++;
	else if (value == 0)
		return (0);
	while (value != 0)
	{
		c += value % 2;
		value /= 2;
	}
	return (c > 0 ? c : 32 + c);
}
