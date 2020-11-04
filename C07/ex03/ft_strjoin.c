/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihekim <jihekim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 21:58:38 by jihekim           #+#    #+#             */
/*   Updated: 2020/11/05 02:41:56 by jihekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char				*str_cat(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest);
}

unsigned int		str_len(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strjoin(int size, char **strs, char *sep)
{
	char			*re;
	char			*temp;
	unsigned int	len;
	int				i;

	if (size == 0)
	{
		re = ((char*)malloc(1));
		re[0] = 0;
		return (re);
	}
	len = 0;
	i = 0;
	while (i < size)
		len = len + str_len(strs[i++]);
	re = (char *)malloc(len + (size - 1) * ft_strlen(sep) + 1);
	temp = str_cat(re, strs[0]);
	i = 1;
	while (i < size)
	{
		temp = str_cat(temp, sep);
		temp = str_cat(temp, strs[i++]);
	}
	*temp = '\0';
	return (re);
}
