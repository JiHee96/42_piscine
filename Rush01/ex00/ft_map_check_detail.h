/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_check_detail.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukim <eukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 16:31:05 by eukim             #+#    #+#             */
/*   Updated: 2020/10/25 16:31:05 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAP_CHECK_DETAIL_H
# define FT_MAP_CHECK_DETAIL_H

# include "ft_define.h"

int		check_boxes(char answer, int box_qty, char *boxes);
int		check_boxes_height_(char answer, int box_qty, char *boxes);
int		check_boxes_unique_(int box_qty, char *boxes);

#endif