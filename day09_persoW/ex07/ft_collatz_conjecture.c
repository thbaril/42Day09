/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabousfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/16 10:46:48 by wabousfi          #+#    #+#             */
/*   Updated: 2018/02/16 10:46:49 by wabousfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	static int i;

	i++;
	if (base == 1)
		return (i - 1);
	if (base & 1)
		return (ft_collatz_conjecture(base * 3 + 1));
	return (ft_collatz_conjecture(base / 2));
}
