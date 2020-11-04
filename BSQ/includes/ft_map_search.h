/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_search.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukim <eukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 22:07:01 by eukim             #+#    #+#             */
/*   Updated: 2020/11/02 22:07:02 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAP_SEARCH_H
# define FT_MAP_SEARCH_H

# include "ft_define.h"
# include "ft_map_define.h"
# include "ft_map_square.h"
# include "ft_math.h"

t_bool	search_largest_square(t_map *map, t_square *square);
void	update_largest_sq_narrow(t_map *map, t_square *square);
void	update_largest_sq_wild_01(t_map *map);
void	update_largest_sq_wild_02(t_map *map, t_square *square);

#endif
