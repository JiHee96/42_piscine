/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_lib.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukim <eukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 22:11:46 by eukim             #+#    #+#             */
/*   Updated: 2020/11/02 22:12:04 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_lib.h"

int		ft_strlen(char *str)
{
	int i_length;

	i_length = 0;
	while (str[i_length] != '\0')
		++i_length;
	return (i_length);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i_length;

	i_length = 0;
	while (src[i_length] != '\0')
	{
		dest[i_length] = src[i_length];
		++i_length;
	}
	dest[i_length] = '\0';
	return (dest);
}

int		ft_atoi(char *str)
{
	int			i;
	long int	sign;
	long int	num;

	sign = 1;
	num = 0;
	i = 0;
	while ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		++i;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		num *= 10;
		num += (str[i] - '0');
		++i;
	}
	return ((int)(sign * num));
}

int		ft_check_printable(char c)
{
	if (!((c >= ' ') && (c <= '~')))
		return (0);
	return (1);
}
