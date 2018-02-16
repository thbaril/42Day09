/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabousfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 10:46:34 by wabousfi          #+#    #+#             */
/*   Updated: 2018/02/16 10:46:39 by wabousfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_antidote(int i, int j, int k)
{
	if ((i > k && i < j) || (i < k && i > j))
		return (i);
	else if ((j > k && j < i) || (j < k && j > i))
		return (j);
	return (k);
}
