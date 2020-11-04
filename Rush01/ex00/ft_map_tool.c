/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_tool.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukim <eukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 20:24:57 by eukim             #+#    #+#             */
/*   Updated: 2020/10/25 11:35:26 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_map_tool.h"

int		fill_correct_box(char **map)
{
	return (fill_and_chk_map_r_(map, 0, 0, 0));
}

int		fill_and_chk_map_r_(char **map, int n_recursion, int i_row, int i_col)
{
	int i_number;
	int check_result;

	i_row = (n_recursion / COL_SIZE) + 1;
	i_col = (n_recursion % COL_SIZE) + 1;
	i_number = 1;
	while (i_number <= NUMBER_MAX)
	{
		map[i_row][i_col] = i_number;
		if (n_recursion + 1 < ROW_SIZE * COL_SIZE)
		{
			check_result = fill_and_chk_map_r_(map, n_recursion + 1, 0, 0);
			if (check_result == RETURN_SUCCESS)
				return (RETURN_SUCCESS);
		}
		else
		{
			check_result = check_map_content_(map);
			if (check_result == RETURN_SUCCESS)
				return (RETURN_SUCCESS);
		}
		++i_number;
	}
	return (RETURN_FALURE);
}

int		check_map_content_(char **map)
{
	if (check_map_content_col_forward(map, 0, 0) == RETURN_FALURE)
		return (RETURN_FALURE);
	if (check_map_content_col_backward(map, 0, 0) == RETURN_FALURE)
		return (RETURN_FALURE);
	if (check_map_content_row_forward(map, 0, 0) == RETURN_FALURE)
		return (RETURN_FALURE);
	if (check_map_content_row_backward(map, 0, 0) == RETURN_FALURE)
		return (RETURN_FALURE);
	return (RETURN_SUCCESS);
}

void	malloc_map(char ***map)
{
	int		i_row;

	*map = malloc(sizeof(char *) * (1 + ROW_SIZE + 1));
	i_row = 0;
	while (i_row < (1 + ROW_SIZE + 1))
	{
		(*map)[i_row] = malloc(sizeof(char) * (1 + COL_SIZE + 1));
		++i_row;
	}
}

void	free_map(char ***map)
{
	int		i_row;

	i_row = 0;
	while (i_row < (1 + ROW_SIZE + 1))
	{
		free((*map)[i_row]);
		++i_row;
	}
	free(*map);
}
