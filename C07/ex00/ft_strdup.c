/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihekim <jihekim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 21:49:05 by jihekim           #+#    #+#             */
/*   Updated: 2020/11/05 00:57:34 by jihekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strdup(char *str)
{
	char	*re;
	int		len;
	int		i;

	len = 0;
	while (str[len])
		len++;
	re = (char*)malloc(len + 1);
	if (!re)
		return (0);
	i = 0;
	while (i < len)
	{
		re[i] = str[i];
		i++;
	}
	re[i] = '\0';
	return (re);
}
