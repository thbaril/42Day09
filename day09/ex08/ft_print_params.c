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

int	main(int argc, char **argv)
{
	int i;
	int a = 0;
	char *word1 = strdup("president");
	char *word2 = "attentat";
	char *word3 = "Bauer";

	i = 1;
	while (i < argc)
	{
	if(argv[i] == word1 && argv[i] == word2 && argv[i] == word3)
			write(1, "Alert!!!", 8);		
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
