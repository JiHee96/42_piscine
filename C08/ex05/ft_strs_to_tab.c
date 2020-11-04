/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihekim <jihekim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:39:36 by jihekim           #+#    #+#             */
/*   Updated: 2020/11/04 20:43:55 by jihekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

char				*ft_strcpy(char *str)
{
	char			*dest;
	int				len;
	int				index;

	len = 0;
	while (str[len])
	{
		len++;
	}
	dest = (char *)malloc(sizeof(char) * len + 1);
	if (!dest)
		return (0);
	index = 0;
	while (str[index])
	{
		dest[index] = str[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int					ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*re;
	int				index;

	re = (t_stock_str*)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!re)
		return (0);
	index = 0;
	while (av[index] != '\0' && index < ac)
	{
		re[index].size = ft_strlen(av[index]);
		re[index].str = av[index];
		re[index].copy = ft_strcpy(av[index]);
		index++;
	}
	re[index].size = 0;
	re[index].str = 0;
	re[index].copy = 0;
	return (re);
}
