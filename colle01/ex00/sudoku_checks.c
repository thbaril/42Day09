/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_checks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabousfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 04:22:10 by wabousfi          #+#    #+#             */
/*   Updated: 2018/02/14 04:22:10 by wabousfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku_checks.h"
#include "sudoku.h"

int		ft_check_grid(int grid[N][N])
{
	int i;
	int j;

	j = 0;
	while (j < N)
	{
		i = 0;
		while (i < N)
		{
			if (grid[i][j] == 0 || ft_is_on_box(grid, grid[i][j], i, j))
				return (0);
			++i;
		}
		++j;
	}
	return (1);
}

int		ft_is_on_row(int grid[N][N], int n, int c, int r)
{
	int i;

	i = 0;
	while (i < N)
	{
		if (i != c && grid[i][r] == n)
			return (1);
		++i;
	}
	return (0);
}

int		ft_is_on_col(int grid[N][N], int n, int c, int r)
{
	int j;

	j = 0;
	while (j < N)
	{
		if (j != r && grid[c][j] == n)
			return (1);
		++j;
	}
	return (0);
}

int		ft_is_on_block(int grid[N][N], int n, int c, int r)
{
	int i0;
	int j0;
	int i;
	int j;

	i0 = (c / N3) * N3;
	j0 = (r / N3) * N3;
	i = i0;
	while (i < i0 + N3)
	{
		j = j0;
		while (j < j0 + N3)
		{
			if (i != c && j != r && grid[i][j] == n)
				return (1);
			++j;
		}
		++i;
	}
	return (0);
}

int		ft_is_on_box(int grid[N][N], int n, int c, int r)
{
	return (ft_is_on_row(grid, n, c, r) ||
	ft_is_on_col(grid, n, c, r) ||
	ft_is_on_block(grid, n, c, r));
}
