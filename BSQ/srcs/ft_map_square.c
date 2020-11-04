/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_square.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukim <eukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 22:02:14 by eukim             #+#    #+#             */
/*   Updated: 2020/11/05 00:42:18 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_map_square.h"

void	input_square(t_square *square, int x, int y, int size)
{
	if (square == NULL)
		return ;
	square->x = x;
	square->y = y;
	square->size = size;
}
