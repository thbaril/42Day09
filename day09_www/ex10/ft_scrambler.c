/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabousfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 11:18:48 by wabousfi          #+#    #+#             */
/*   Updated: 2018/02/16 11:18:56 by wabousfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int tmp;

	tmp = *******c;
	*******c = ***a;
	***a = ****d;
	****d = tmp;
}