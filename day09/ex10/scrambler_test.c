void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int	temp_a;
	int	temp_b;
	int	temp_c;
	int	temp_d;

	temp_a = ***a;
	temp_b = *b;
	temp_c = *******c;
	temp_d = ****d;
	***a = temp_b;
	*b = temp_d;
	*******c = ***a;
	****d = *******c;
}
