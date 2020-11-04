/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_output.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukim <eukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 22:03:54 by eukim             #+#    #+#             */
/*   Updated: 2020/11/02 22:04:27 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_map_output.h"

void	print_map(t_map *map, t_square *square)
{
	int		i_row;
	int		i_col;

	if (map == NULL)
		return ;
	i_row = 0;
	while (i_row < map->row_size)
	{
		i_col = 0;
		while (i_col < map->col_size)
		{
			if ((square != NULL) && (i_row >= square->y &&
				i_row < square->y + square->size) &&
				(i_col >= square->x &&
				i_col < square->x + square->size))
				write(1, &(map->c_full), 1);
			else if (map->content[i_row][i_col] >= MAP_EMPTY)
				write(1, &(map->c_empty), 1);
			else if (map->content[i_row][i_col] == MAP_OBSTACLE)
				write(1, &(map->c_obstacle), 1);
			++i_col;
		}
		write(1, "\n", 1);
		++i_row;
	}
}
