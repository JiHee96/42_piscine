/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_search.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukim <eukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 22:04:50 by eukim             #+#    #+#             */
/*   Updated: 2020/11/02 22:06:51 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_map_search.h"

t_bool	search_largest_square(t_map *map, t_square *square)
{
	if (map == NULL || square == NULL)
		return (FALSE);
	square->size = 0;
	if (map->row_size < 2 || map->col_size < 2)
		update_largest_sq_narrow(map, square);
	else
	{
		update_largest_sq_wild_01(map);
		update_largest_sq_wild_02(map, square);
	}
	return (square->size > 0);
}

void	update_largest_sq_narrow(t_map *map, t_square *square)
{
	int		y;
	int		x;

	x = 0;
	while (x < map->col_size)
	{
		y = 0;
		while (y < map->row_size)
		{
			if (map->content[y][x] == MAP_EMPTY)
				return (input_square(square, x, y, 1));
			++y;
		}
		++x;
	}
}

void	update_largest_sq_wild_01(t_map *map)
{
	int		y;
	int		x;
	int		size;

	x = 1;
	while (x < map->col_size)
	{
		y = 1;
		while (y < map->row_size)
		{
			if (map->content[y][x] == MAP_EMPTY)
			{
				size = ft_min(map->content[y - 1][x],
					map->content[y][x - 1], map->content[y - 1][x - 1]) + 1;
				map->content[y][x] = size;
			}
			++y;
		}
		++x;
	}
}

void	update_largest_sq_wild_02(t_map *map, t_square *square)
{
	int		y;
	int		x;
	int		size;

	x = 0;
	while (x < map->col_size)
	{
		y = 0;
		while (y < map->row_size)
		{
			if (map->content[y][x] > square->size)
			{
				size = map->content[y][x];
				input_square(square, x - (size - 1), y - (size - 1), size);
			}
			++y;
		}
		++x;
	}
}
