/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_checks.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabousfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 04:22:13 by wabousfi          #+#    #+#             */
/*   Updated: 2018/02/14 04:22:14 by wabousfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_CHECKS_H
# define SUDOKU_CHECKS_H
# include "sudoku.h"

int		ft_check_grid(int grid[N][N]);
int		ft_is_on_row(int grid[N][N], int n, int c, int r);
int		ft_is_on_col(int grid[N][N], int n, int c, int r);
int		ft_is_on_block(int grid[N][N], int n, int c, int r);
int		ft_is_on_box(int grid[N][N], int n, int c, int r);

#endif
