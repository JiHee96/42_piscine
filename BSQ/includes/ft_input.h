/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukim <eukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 21:39:47 by eukim             #+#    #+#             */
/*   Updated: 2020/11/02 21:40:05 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_INPUT_H
# define FT_INPUT_H

# include "ft_define.h"
# include <fcntl.h>
# include <unistd.h>

t_bool	read_file(char *path, char buffer[], unsigned int buffer_size);
t_bool	read_input(char *buffer, unsigned int buffer_size);

#endif
