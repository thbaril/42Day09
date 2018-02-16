unsigned int	ft_collatz_conjecture(unsigned int base)
{
	static int i;

	i++;
	if (base == 1)
		return (i - 1);
	if (base & 1)
		return (ft_collatz_conjecture(base * 3 + 1));
	return (ft_collatz_conjecture(base / 2));
}
