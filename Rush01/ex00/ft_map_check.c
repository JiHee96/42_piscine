/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_check_all.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukim <eukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 17:20:31 by eukim             #+#    #+#             */
/*   Updated: 2020/10/25 11:25:28 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_map_check.h"

int		check_map_content_col_forward(char **map, int i_row, int i_box)
{
	char	*boxes;
	int		return_value;
	int		r_v_current;

	return_value = RETURN_SUCCESS;
	i_row = 1;
	while (i_row < 1 + ROW_SIZE)
	{
		boxes = (char*)malloc(sizeof(char) * COL_SIZE);
		i_box = 0;
		while (i_box < COL_SIZE)
		{
			boxes[i_box] = map[i_row][i_box + 1];
			++i_box;
		}
		r_v_current = check_boxes(map[i_row][0], COL_SIZE, boxes);
		free(boxes);
		if (r_v_current == RETURN_FALURE)
		{
			return_value = RETURN_FALURE;
			break ;
		}
		++i_row;
	}
	return (return_value);
}

int		check_map_content_col_backward(char **map, int i_row, int i_box)
{
	char	*boxes;
	int		return_value;
	int		r_v_current;

	return_value = RETURN_SUCCESS;
	i_row = 1;
	while (i_row < 1 + ROW_SIZE)
	{
		boxes = (char*)malloc(sizeof(char) * COL_SIZE);
		i_box = 0;
		while (i_box < COL_SIZE)
		{
			boxes[i_box] = map[i_row][COL_SIZE - i_box];
			++i_box;
		}
		r_v_current = check_boxes(map[i_row][1 + COL_SIZE], COL_SIZE, boxes);
		free(boxes);
		if (r_v_current == RETURN_FALURE)
		{
			return_value = RETURN_FALURE;
			break ;
		}
		++i_row;
	}
	return (return_value);
}

int		check_map_content_row_forward(char **map, int i_col, int i_box)
{
	char	*boxes;
	int		return_value;
	int		r_v_current;

	return_value = RETURN_SUCCESS;
	i_col = 1;
	while (i_col < 1 + COL_SIZE)
	{
		boxes = (char*)malloc(sizeof(char) * ROW_SIZE);
		i_box = 0;
		while (i_box < ROW_SIZE)
		{
			boxes[i_box] = map[i_box + 1][i_col];
			++i_box;
		}
		r_v_current = check_boxes(map[0][i_col], ROW_SIZE, boxes);
		free(boxes);
		if (r_v_current == RETURN_FALURE)
		{
			return_value = RETURN_FALURE;
			break ;
		}
		++i_col;
	}
	return (return_value);
}

int		check_map_content_row_backward(char **map, int i_col, int i_box)
{
	char	*boxes;
	int		return_value;
	int		r_v_current;

	return_value = RETURN_SUCCESS;
	i_col = 1;
	while (i_col < 1 + COL_SIZE)
	{
		boxes = (char*)malloc(sizeof(char) * ROW_SIZE);
		i_box = 0;
		while (i_box < ROW_SIZE)
		{
			boxes[i_box] = map[ROW_SIZE - i_box][i_col];
			++i_box;
		}
		r_v_current = check_boxes(map[1 + ROW_SIZE][i_col], ROW_SIZE, boxes);
		free(boxes);
		if (r_v_current == RETURN_FALURE)
		{
			return_value = RETURN_FALURE;
			break ;
		}
		++i_col;
	}
	return (return_value);
}
