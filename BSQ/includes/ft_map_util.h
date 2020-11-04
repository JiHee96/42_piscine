/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_util.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukim <eukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 22:10:59 by eukim             #+#    #+#             */
/*   Updated: 2020/11/02 22:11:00 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAP_UTIL_H
# define FT_MAP_UTIL_H

# include "ft_define.h"
# include "ft_map_error.h"
# include "ft_map_define.h"
# include "ft_map_input.h"
# include <stdlib.h>

t_error_code	init_map(t_map *map, char *map_text);
t_error_code	malloc_map(t_map *map);
t_error_code	free_map(t_map *map);
void			clear_map(t_map *map);

#endif
