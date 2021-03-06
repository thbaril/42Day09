/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thbaril <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/18 23:29:13 by thbaril           #+#    #+#             */
/*   Updated: 2018/02/20 07:05:41 by thbaril          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

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

	if (!(tab = (t_stock_par *)malloc(sizeof(t_stock_par) * (ac + 1))))
		return (NULL);
	i = 0;
	while (i < ac)
	{
		printf("size\n");
		tab->size_param = ft_strlen(av[i]);
		printf("str\n");
		tab->str = av[i];
		printf("copy\n");
		tab->copy = ft_strdup(av[i]);
		printf("%s\n", tab->copy);
		printf("tab\n");
		tab->tab = ft_split_whitespaces(av[i]);
		tab++;
		i++;
	}
	printf("end tab\n");
	tab->str = NULL;
	printf("END\n");
	return (tab);
}
