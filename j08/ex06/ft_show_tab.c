/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbaril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 01:56:32 by thbaril           #+#    #+#             */
/*   Updated: 2018/02/20 07:05:58 by thbaril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <unistd.h>
#include <stdio.h>

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int			find_next_word(char *str)
{
	int i;

	i = 0;
	while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
		i++;
	return (i - 1);
}

int			count_words(char *str)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' & str[i] != '\t' & str[i] != '\n')
		{
			i = i + find_next_word(str + i);
			count++;
		}
		i++;
	}
	return (count);
}

void		cpy_word(char *dest, char *src, int length)
{
	int i;

	i = 0;
	while (src[i] && i < length)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return ;
}

char		**ft_split_whitespaces(char *str)
{
	char	**tmp;
	int		i;
	int		c;
	int		last;

	c = 0;
	i = 0;
	if ((tmp = (char**)malloc(sizeof(char*) * (count_words(str) + 1))) == NULL)
		return (NULL);
	while (str[i])
	{
		if (str[i] != ' ' & str[i] != '\t' & str[i] != '\n')
		{
			last = i;
			i += find_next_word(str + i);
			if ((tmp[c] = (char*)malloc(sizeof(char) * (i - last))) == NULL)
				return (NULL);
			cpy_word(tmp[c++], str + last, i - last + 1);
		}
		i++;
	}
	if ((tmp[c] = (char*)malloc(sizeof(char))) == NULL)
		return (NULL);
	tmp[c][0] = 0;
	return (tmp);
}

void	ft_put_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i] != NULL)
	{
		ft_putstr(tab[i]);
		ft_putchar('\n');
		i++;
	}
	return ;
}

void	ft_show_tab(struct s_stock_par *par)
{
	int	i;

	i = 0;
	printf("Starting ft_show_tab\n");
	while (i < 2)
	{
		printf("%d - Putstr\n", i);
		printf("%d\n", par[i]);
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		printf("%d - Putnbr\n", i);
		ft_putnbr(par->size_param);
		ft_putchar('\n');
		printf("%d - Puttab\n", i);
		//ft_put_tab(par->tab);
		i++;
	}
	return ;
}


int					ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strdup(char *str)
{
	char	*ret;
	int		i;

	if (!(ret = (char *)malloc(sizeof(char) * ft_strlen(str) + 1)))
		return (NULL);
	i = 0;
	while (str[i])
	{
		ret[i] = str[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par *tab;
	int			i;

	printf("Allocating %lu * %d (%lu), tab is %lu(%d)\n", sizeof(t_stock_par), (ac+1), sizeof(t_stock_par) * (ac+1), sizeof(tab), (int)tab);
	if (!(tab = malloc(sizeof(t_stock_par) * (ac + 1))))
		return (NULL);
	printf("%lu(%d)\n", sizeof(tab), (int)tab);
	i = 0;
	while (i < ac)
	{
		printf("%d / %s - Get size\n", i, av[i]);
		tab[i].size_param = ft_strlen(av[i]);
		printf("%d - str\n", i);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		printf("%d - %s - copy\n", i, tab[i].copy);
		printf("%d - tab\n", i);
		tab->tab = ft_split_whitespaces(av[i]);
		i++;
	}
	printf("End of ft_param_to_tab\n");
	tab->str = NULL;
	return (tab);
}


int main(int argc, char **argv)
{
	struct s_stock_par *penis;
	penis = ft_param_to_tab(argc - 1, argv+1);
	printf("%s\n", penis[0].copy);
		ft_show_tab(penis);	
	return 0;
}