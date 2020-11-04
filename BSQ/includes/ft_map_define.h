/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_define.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukim <eukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 21:40:12 by eukim             #+#    #+#             */
/*   Updated: 2020/11/02 22:17:04 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAP_DEFINE_H
# define FT_MAP_DEFINE_H

# include "ft_define.h"

# define MAP_OBSTACLE 0
# define MAP_EMPTY 1

typedef struct	s_map
{
	short		**content;
	int			row_size;
	int			col_size;
	char		c_empty;
	char		c_obstacle;
	char		c_full;
}				t_map;

typedef struct	s_square
{
	int			y;
	int			x;
	int			size;
}				t_square;

#endif
