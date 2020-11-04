/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_error.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukim <eukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 21:37:03 by eukim             #+#    #+#             */
/*   Updated: 2020/11/02 21:38:46 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAP_ERROR_H
# define FT_MAP_ERROR_H

# include "ft_define.h"
# include <unistd.h>

typedef enum
{
	ECODE_NO_ERROR,
	ECODE_CODE_ERROR,
	ECODE_INPUT_ERROR,
	ECODE_CAN_NOT_OPEN_FILE,
	ECODE_WRONG_MAP,
	ECODE_MAP_IS_NO_EMPTY,
	ECODE_MALLOC_ERROR
}	t_error_code;

void	print_map_error(t_error_code code);

#endif
