/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_check.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukim <eukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 19:46:45 by eukim             #+#    #+#             */
/*   Updated: 2020/10/25 11:33:42 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_INPUT_CHECK_H
# define FT_INPUT_CHECK_H

# include "ft_define.h"
# include <stdlib.h>

int		check_input(int argc, char *argv[]);
int		check_input_count_(int argc);
int		check_input_context_(char *argv[]);

#endif
