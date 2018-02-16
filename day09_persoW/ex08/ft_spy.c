/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabousfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 11:56:55 by wabousfi          #+#    #+#             */
/*   Updated: 2018/02/16 15:15:32 by wabousfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

#define CONDITION(a, b, c, arg) ((((ft_strcmp(a, arg[i]) == 0) || \
				(ft_strcmp(b, arg[i]) == 0) || \
				(ft_strcmp(c, arg[i]) == 0))) ? 1 : 0)

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
			return (0);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int i; int a = 0;
	char *word1;
	char *word2;
	char *word3;

	word1 = "president";
	word2 = "attentat";
	word3 = "Bauer";
	i = 0;
	while (a++ < argc)
	{
		while(argv[a])
			a++ = ' ';
		if ((i < argc)  && ((ft_strcmp(word1, argv[i]) == 0) || \
					(ft_strcmp(word2, argv[i]) == 0) || \
					(ft_strcmp(word3, argv[i]) == 0)))
		{
			write(1, "Alert!!!\n", 9);
			break ;
			if (CONDITION(word1, word2, word3, argv) != 0)
			{
				ft_putstr(argv[i]);
				ft_putchar('\n');
			}
		}
	}
	return (0);
}
