/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukim <eukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 17:21:01 by eukim             #+#    #+#             */
/*   Updated: 2020/10/25 10:45:15 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_map_input.h"

void	fill_map_zero(char **map)
{
	int		i_row;
	int		i_col;

	i_row = 0;
	while (i_row < 1 + ROW_SIZE + 1)
	{
		i_col = 0;
		while (i_col < 1 + COL_SIZE + 1)
		{
			map[i_row][i_col] = 0;
			++i_col;
		}
		++i_row;
	}
}

void	input_map_edge(char **map, char *argv[])
{
	input_map_edge_col_(map, argv);
	input_map_edge_row_(map, argv);
}

void	input_map_edge_col_(char **map, char *argv[])
{
	int		i_col;
	int		i_arg;

	i_arg = 0;
	i_col = 1;
	while (i_col < 1 + COL_SIZE)
	{
		map[0][i_col] = argv[1][i_arg] - '0';
		++i_col;
		i_arg += 2;
	}
	i_col = 1;
	while (i_col < 1 + COL_SIZE)
	{
		map[1 + ROW_SIZE][i_col] = argv[1][i_arg] - '0';
		++i_col;
		i_arg += 2;
	}
}

void	input_map_edge_row_(char **map, char *argv[])
{
	int		i_row;
	int		i_arg;

	i_arg = NUMBER_MAX * 2 * 2;
	i_row = 1;
	while (i_row < 1 + ROW_SIZE)
	{
		map[i_row][0] = argv[1][i_arg] - '0';
		++i_row;
		i_arg += 2;
	}
	i_row = 1;
	while (i_row < 1 + ROW_SIZE)
	{
		map[i_row][1 + COL_SIZE] = argv[1][i_arg] - '0';
		++i_row;
		i_arg += 2;
	}
}
