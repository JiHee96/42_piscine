/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_util.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukim <eukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 00:43:30 by eukim             #+#    #+#             */
/*   Updated: 2020/11/05 00:43:41 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str_util.h"

int		get_line_size(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\n' && str[i] != '\0')
	{
		++i;
	}
	return (i);
}

t_bool	str_is_allow(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(((str[i] >= ' ') && (str[i] <= '~')) || (str[i] == '\n')))
			return (FALSE);
		++i;
	}
	return (TRUE);
}
