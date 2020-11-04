/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukim <eukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 22:01:59 by eukim             #+#    #+#             */
/*   Updated: 2020/11/05 00:41:21 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_map_input.h"

char	*input_map_info_01(t_map *map, char *map_text)
{
	int		line_size;
	int		i;

	line_size = get_line_size(map_text);
	if (line_size < 4)
		return (NULL);
	map->row_size = 0;
	i = 0;
	while (i < line_size - 3)
	{
		if (*map_text < '0' || *map_text > '9')
			return (NULL);
		map->row_size = (map->row_size * 10) + (*map_text - '0');
		++i;
		++map_text;
	}
	return (map_text);
}

char	*input_map_info_02(t_map *map, char *map_text)
{
	if (ft_check_printable(*map_text) == FALSE)
		return (NULL);
	map->c_empty = *(map_text++);
	if (ft_check_printable(*map_text) == FALSE)
		return (NULL);
	map->c_obstacle = *(map_text++);
	if (ft_check_printable(*map_text) == FALSE)
		return (NULL);
	map->c_full = *(map_text++);
	if (!((map->c_empty != map->c_obstacle) &&
		(map->c_obstacle != map->c_full) && (map->c_full != map->c_empty)))
		return (NULL);
	if (*(map_text++) != '\n')
		return (NULL);
	return (map_text);
}

char	*input_map_info_03(t_map *map, char *map_text)
{
	int		line_size;

	if ((line_size = get_line_size(map_text)) == 0)
		return (NULL);
	map->col_size = line_size;
	return (map_text);
}

char	*input_map_content(t_map *map, char *map_text)
{
	int		i_row;
	int		i_col;

	if (malloc_map(map) != ECODE_NO_ERROR)
		return (NULL);
	i_row = 0;
	while (i_row < map->row_size)
	{
		i_col = 0;
		while (i_col < map->col_size)
		{
			if (*map_text == map->c_empty)
				map->content[i_row][i_col] = MAP_EMPTY;
			else if (*map_text == map->c_obstacle)
				map->content[i_row][i_col] = MAP_OBSTACLE;
			else
				return (NULL);
			++map_text;
			++i_col;
		}
		if (*(map_text++) != '\n')
			return (NULL);
		++i_row;
	}
	return (map_text);
}

char	*input_map_finish(char *map_text)
{
	if (*(map_text++) != '\0')
		return (NULL);
	return (map_text);
}
