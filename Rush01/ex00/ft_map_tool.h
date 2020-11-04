/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_tool.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukim <eukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 20:24:12 by eukim             #+#    #+#             */
/*   Updated: 2020/10/25 11:30:19 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAP_TOOL_H
# define FT_MAP_TOOL_H

# include "ft_define.h"
# include "ft_map_check.h"

int		fill_correct_box(char **map);
int		fill_and_chk_map_r_(char **map, int n_recursion, int i_row, int i_col);
int		check_map_content_(char **map);
void	malloc_map(char ***map);
void	free_map(char ***map);

#endif
