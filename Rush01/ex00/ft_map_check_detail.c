/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_check_detail.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukim <eukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 16:32:26 by eukim             #+#    #+#             */
/*   Updated: 2020/10/25 16:32:26 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_map_check_detail.h"

int		check_boxes(char answer, int box_qty, char *boxes)
{
	if (check_boxes_unique_(box_qty, boxes) == RETURN_FALURE)
	{
		return (RETURN_FALURE);
	}
	if (check_boxes_height_(answer, box_qty, boxes) == RETURN_FALURE)
	{
		return (RETURN_FALURE);
	}
	return (RETURN_SUCCESS);
}

int		check_boxes_height_(char answer, int box_qty, char *boxes)
{
	char	calculated_answer;
	int		i_box;
	char	highst_box;

	calculated_answer = 0;
	i_box = 0;
	highst_box = 0;
	while (i_box < box_qty)
	{
		if (boxes[i_box] > highst_box)
		{
			highst_box = boxes[i_box];
			calculated_answer += 1;
		}
		++i_box;
	}
	if (calculated_answer != answer)
		return (RETURN_FALURE);
	return (RETURN_SUCCESS);
}

int		check_boxes_unique_(int box_qty, char *boxes)
{
	int		i_box1;
	int		i_box2;

	i_box1 = 0;
	while (i_box1 < box_qty)
	{
		i_box2 = i_box1 + 1;
		while (i_box2 < box_qty)
		{
			if (boxes[i_box1] == boxes[i_box2])
				return (RETURN_FALURE);
			++i_box2;
		}
		++i_box1;
	}
	return (RETURN_SUCCESS);
}
