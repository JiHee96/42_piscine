/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihekim <jihekim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 21:57:45 by jihekim           #+#    #+#             */
/*   Updated: 2020/11/04 23:43:35 by jihekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	*re;
	int	*temp;

	if (min > max)
		return (0);
	if (min == max)
		return (0);
	if (!(re = (int *)malloc(sizeof(int) * ((unsigned int)max - min))))
		return (0);
	temp = re;
	while (min < max)
		*(temp++) = min++;
	return (re);
}
