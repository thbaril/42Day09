/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabousfi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 04:22:20 by wabousfi          #+#    #+#             */
/*   Updated: 2018/02/14 04:22:21 by wabousfi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku_utils.h"
#include "sudoku.h"
#include "utils.h"

int		ft_set_grid(int grid[N][N], int argc, char **argv)
{
	int		i;
	int		j;
	char	c;

	if (argc != (N + 1))
		return (ERR_ARGS_BAD_COUNT);
	j = 1;
	while (j < argc)
	{
		if (ft_strlen(argv[j]) != N)
			return (ERR_ARGS_BAD_LINE_LENGTH);
		i = 0;
		while ((c = argv[j][i]))
		{
			if ((c < '0' || c > '9') && c != '.')
				return (ERR_ARGS_BAD_CHAR);
			if (c == '.')
				grid[i][j - 1] = 0;
			else
				grid[i][j - 1] = c - '0';
			++i;
		}
		++j;
	}
	return (EXIT_SUCCESS);
}

void	ft_put_grid(int grid[N][N])
{
	int		i;
	int		j;

	j = 0;
	while (j < N)
	{
		i = 0;
		while (i < N)
		{
			ft_putchar('0' + grid[i][j]);
			if (i < N - 1)
				ft_putchar(' ');
			++i;
		}
		ft_putchar('\n');
		++j;
	}
}

void	ft_copy_grid(int grid1[N][N], int grid2[N][N])
{
	int i;
	int j;

	j = 0;
	while (j < N)
	{
		i = 0;
		while (i < N)
		{
			grid2[i][j] = grid1[i][j];
			++i;
		}
		++j;
	}
}
