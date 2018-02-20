
char	**ft_split_whitespaces(char *str);

struct	s_stock_par	*ft_param_to_tab(int ac, char **argv);

void	ft_show_tab(struct s_stock_par *par);

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	struct s_stock_par	*t;

	t = ft_param_to_tab(argc, argv);
	printf("t done\n");
	ft_show_tab(t);
	return (0);
}
