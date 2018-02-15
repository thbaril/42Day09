#include <unistd.h>
#include <string.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] == s2[i])
			return(0);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int i;
	char *word1;
	char *word2;
	char *word3;

	word1 = "president";
	word2 = "attentat";
	word3 = "Bauer";

	i = 1;
	while (i < argc)
	{
		if((ft_strcmp(word1, argv[i]) == 0) && (ft_strcmp(word2, argv[i]) == 0) && (ft_strcmp(word3, argv[i]) == 0))
			write(1, "Alert!!!", 8);		
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
