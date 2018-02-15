/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_utils.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabousfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 04:22:27 by wabousfi          #+#    #+#             */
/*   Updated: 2018/02/14 04:22:28 by wabousfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_UTILS_H
# define SUDOKU_UTILS_H
# include "sudoku.h"

int		ft_set_grid(int grid[N][N], int argc, char **argv);
void	ft_put_grid(int grid[N][N]);
void	ft_copy_grid(int grid1[N][N], int grid2[N][N]);

#endif
