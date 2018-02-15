/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabousfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 04:22:03 by wabousfi          #+#    #+#             */
/*   Updated: 2018/02/14 04:22:04 by wabousfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include "utils.h"
#include "sudoku_checks.h"
#include "sudoku_utils.h"

int		ft_get_next_try(int grid[N][N], int c, int r, int n0)
{
	int n;

	n = n0;
	while (n < N + 1)
	{
		if (!ft_is_on_box(grid, n, c, r))
			return (n);
		++n;
	}
	return (0);
}

int		ft_jump_to_next_box(int *i, int *j)
{
	*i = (*i + 1) % N;
	*j = *j + !*i;
	return (*j < N);
}

int		ft_jump_to_next_empty_box(int grid[N][N], int *i, int *j)
{
	while (grid[*i][*j] != 0)
		if (!ft_jump_to_next_box(i, j))
			return (0);
	return (1);
}

int		ft_resolve_grid(int grid[N][N], int grid_valid[N][N],
	int pos[2], int count)
{
	int n;
	int i;
	int j;

	i = pos[0];
	j = pos[1];
	if (!ft_jump_to_next_empty_box(grid, &i, &j))
	{
		if (count == 0)
			ft_copy_grid(grid, grid_valid);
		return (count + 1);
	}
	n = 1;
	while ((n = ft_get_next_try(grid, i, j, n)) > 0)
	{
		grid[i][j] = n;
		pos[0] = i;
		pos[1] = j;
		count = ft_resolve_grid(grid, grid_valid, pos, count);
		if (count > 1)
			return (count);
		grid[i][j] = 0;
		++n;
	}
	return (count);
}

int		main(int argc, char **argv)
{
	int grid[N][N];
	int grid_valid[N][N];
	int err;
	int pos[2];

	pos[0] = 0;
	pos[1] = 0;
	if ((err = ft_set_grid(grid, argc, argv)) != EXIT_SUCCESS)
	{
		ft_throw_error();
		return (err);
	}
	if (ft_resolve_grid(grid, grid_valid, pos, 0) != 1)
	{
		ft_throw_error();
		return (ERR_GRID_BAD_SOLUTIONS_COUNT);
	}
	if (!ft_check_grid(grid_valid))
	{
		ft_throw_error();
		return (ERR_GRID_INVALID);
	}
	ft_put_grid(grid_valid);
	return (EXIT_SUCCESS);
}
