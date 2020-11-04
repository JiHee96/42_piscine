/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukim <eukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 21:36:40 by eukim             #+#    #+#             */
/*   Updated: 2020/11/05 05:15:06 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_map_error.h"

void	print_map_error(t_error_code code)
{
	if (code == ECODE_INPUT_ERROR)
		write(2, "map error\n", 10);
	else if (code == ECODE_CODE_ERROR)
		write(2, "map error\n", 10);
	else if (code == ECODE_CAN_NOT_OPEN_FILE)
		write(2, "map error\n", 10);
	else if (code == ECODE_WRONG_MAP)
		write(2, "map error\n", 10);
	else if (code == ECODE_MAP_IS_NO_EMPTY)
		write(2, "map error\n", 10);
	else if (code == ECODE_MALLOC_ERROR)
		write(2, "map error\n", 10);
}
