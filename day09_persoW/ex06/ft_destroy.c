/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabousfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 10:46:44 by wabousfi          #+#    #+#             */
/*   Updated: 2018/02/16 10:46:45 by wabousfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	int a;
	int b;

	a = 0;
	while (factory[a] != NULL)
	{
		b = 0;
		while (factory[a][b] != NULL)
		{
			free(factory[a][b]);
			b++;
		}
		free(factory[a++]);
	}
	free(factory);
}
