unsigned int	ft_active_bits(int value)
{
	unsigned int r;

	if (value < 0)
		r = -value;
	else
		r = value;
	while (value > 0)
	{
		r = value % 2;
		value /= 2;
	}
	return (r);
}
