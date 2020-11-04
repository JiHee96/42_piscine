/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_input.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukim <eukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 17:20:31 by eukim             #+#    #+#             */
/*   Updated: 2020/10/25 10:45:22 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAP_INPUT_H
# define FT_MAP_INPUT_H

# include "ft_define.h"

void	fill_map_zero(char **map);
void	input_map_edge(char **map, char *argv[]);
void	input_map_edge_col_(char **map, char *argv[]);
void	input_map_edge_row_(char **map, char *argv[]);

#endif
