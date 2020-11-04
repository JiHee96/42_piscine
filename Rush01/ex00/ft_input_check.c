/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_check.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukim <eukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 19:47:48 by eukim             #+#    #+#             */
/*   Updated: 2020/10/25 11:34:24 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_input_check.h"

int		check_input(int argc, char *argv[])
{
	if (check_input_count_(argc) != RETURN_SUCCESS)
		return (RETURN_FALURE);
	if (check_input_context_(argv) != RETURN_SUCCESS)
		return (RETURN_FALURE);
	return (RETURN_SUCCESS);
}

int		check_input_count_(int argc)
{
	if (argc != 2)
		return (RETURN_FALURE);
	return (RETURN_SUCCESS);
}

int		check_input_context_(char *argv[])
{
	int		i_argv;
	int		char_length;
	char	c;

	char_length = ((ROW_SIZE + COL_SIZE) * 2) * 2 - 1;
	i_argv = 0;
	while (i_argv < char_length)
	{
		c = argv[1][i_argv];
		if (i_argv % 2 == 1)
		{
			if (c != ' ')
				return (RETURN_FALURE);
		}
		else
		{
			if ((c < '1') || (c > (NUMBER_MAX + '0')))
				return (RETURN_FALURE);
		}
		++i_argv;
	}
	if (argv[1][i_argv] != '\0')
		return (RETURN_FALURE);
	return (RETURN_SUCCESS);
}
