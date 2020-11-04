/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_check_all.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukim <eukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 17:20:31 by eukim             #+#    #+#             */
/*   Updated: 2020/10/25 11:34:19 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAP_CHECK_H
# define FT_MAP_CHECK_H

# include "ft_define.h"
# include "ft_map_check_detail.h"
# include <stdlib.h>

int		check_map_content_col_forward(char **map, int i_row, int i_box);
int		check_map_content_col_backward(char **map, int i_row, int i_box);
int		check_map_content_row_forward(char **map, int i_col, int i_box);
int		check_map_content_row_backward(char **map, int i_col, int i_box);

#endif
