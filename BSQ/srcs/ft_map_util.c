/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_util.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukim <eukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 22:07:11 by eukim             #+#    #+#             */
/*   Updated: 2020/11/05 06:00:16 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_map_util.h"

t_error_code	init_map(t_map *map, char *map_text)
{
	if (map == NULL)
		return (ECODE_CODE_ERROR);
	if (str_is_allow(map_text) == FALSE)
		return (ECODE_WRONG_MAP);
	if ((map_text = input_map_info_01(map, map_text)) == NULL)
		return (ECODE_WRONG_MAP);
	if ((map_text = input_map_info_02(map, map_text)) == NULL)
		return (ECODE_WRONG_MAP);
	if ((map_text = input_map_info_03(map, map_text)) == NULL)
		return (ECODE_WRONG_MAP);
	if ((map_text = input_map_content(map, map_text)) == NULL)
		return (ECODE_WRONG_MAP);
	if ((map_text = input_map_finish(map_text)) == NULL)
		return (ECODE_WRONG_MAP);
	return (ECODE_NO_ERROR);
}

t_error_code	malloc_map(t_map *map)
{
	int		i_row;

	if (map == NULL)
		return (ECODE_CODE_ERROR);
	if (map->row_size <= 0 || map->col_size <= 0)
		return (ECODE_WRONG_MAP);
	map->content = (short**)malloc(sizeof(short*) * map->row_size);
	if (map->content == NULL)
		return (ECODE_MALLOC_ERROR);
	i_row = 0;
	while (i_row < map->row_size)
	{
		(map->content)[i_row] = (short*)malloc(sizeof(short) * map->col_size);
		if (map->content[i_row] == NULL)
			return (ECODE_MALLOC_ERROR);
		++i_row;
	}
	return (ECODE_NO_ERROR);
}

t_error_code	free_map(t_map *map)
{
	int		i_row;

	if (map == NULL)
		return (ECODE_CODE_ERROR);
	if (map->content == NULL)
		return (ECODE_CODE_ERROR);
	i_row = 0;
	while (i_row < map->row_size)
	{
		free(map->content[i_row]);
		++i_row;
	}
	free(map->content);
	map->content = NULL;
	clear_map(map);
	return (ECODE_NO_ERROR);
}

void			clear_map(t_map *map)
{
	if (map == NULL)
		return ;
	map->content = NULL;
	map->col_size = 0;
	map->row_size = 0;
	map->c_empty = 0;
	map->c_full = 0;
	map->c_obstacle = 0;
}
