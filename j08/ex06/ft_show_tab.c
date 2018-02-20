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

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return ;
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
	printf("why\n");
	while (i < 2)
	{
		printf("putstr\n");
		ft_putstr(par->copy);
		ft_putchar('\n');
		printf("putstr\n");
		ft_putnbr(par->size_param);
		ft_putchar('\n');
		printf("put_tab\n");
		ft_put_tab(par->tab);
		par++;
		i++;
	}
	return ;
}
