/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihekim <jihekim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 21:58:11 by jihekim           #+#    #+#             */
/*   Updated: 2020/11/05 00:36:14 by jihekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	re;
	int	*temp;

	if (min > max)
		return (0);
	if (min == max)
		return (0);
	re = max - min;
	if (!(*range = (int*)malloc(sizeof(int) * re)))
		return (-1);
	temp = *range;
	while (min < max)
		*(temp++) = min++;
	return (re);
}
