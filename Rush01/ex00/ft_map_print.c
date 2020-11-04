/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukim <eukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 18:44:17 by eukim             #+#    #+#             */
/*   Updated: 2020/10/25 10:45:31 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_map_print.h"

void	print_map(char **map)
{
	if (PRINT_EDGE)
		print_map_with_edge_(map);
	else
		print_map_without_edge_(map);
}

void	print_map_with_edge_(char **map)
{
	int		i_row;
	int		i_col;

	i_row = 0;
	while (i_row < 1 + ROW_SIZE + 1)
	{
		i_col = 0;
		while (i_col < 1 + COL_SIZE + 1)
		{
			print_number(map[i_row][i_col]);
			++i_col;
			if (i_col < 1 + COL_SIZE + 1)
				write(1, " ", 1);
		}
		++i_row;
		write(1, "\n", 1);
	}
}

void	print_map_without_edge_(char **map)
{
	int		i_row;
	int		i_col;

	i_row = 1;
	while (i_row < 1 + ROW_SIZE)
	{
		i_col = 1;
		while (i_col < 1 + COL_SIZE)
		{
			print_number(map[i_row][i_col]);
			++i_col;
			if (i_col < 1 + COL_SIZE)
				write(1, " ", 1);
		}
		++i_row;
		write(1, "\n", 1);
	}
}
