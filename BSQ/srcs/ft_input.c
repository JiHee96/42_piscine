/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukim <eukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 21:38:54 by eukim             #+#    #+#             */
/*   Updated: 2020/11/02 23:07:19 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_input.h"

t_bool	read_file(char *path, char *buffer, unsigned int buffer_size)
{
	int		file_descriptor;
	int		result_read;

	file_descriptor = open(path, O_RDONLY);
	if (file_descriptor <= 0)
		return (FALSE);
	result_read = read(file_descriptor, buffer, buffer_size);
	if (result_read <= 0)
		return (FALSE);
	buffer[result_read] = '\0';
	close(file_descriptor);
	return (TRUE);
}

t_bool	read_input(char *buffer, unsigned int buffer_size)
{
	unsigned int	i;

	if (read(0, buffer, buffer_size) <= 0)
		return (FALSE);
	i = 0;
	while (i < buffer_size)
	{
		if (buffer[i] == '\n')
		{
			buffer[i] = '\0';
			break ;
		}
		++i;
	}
	return (TRUE);
}
