/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_input.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukim <eukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 22:02:14 by eukim             #+#    #+#             */
/*   Updated: 2020/11/02 22:02:33 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAP_INPUT_H
# define FT_MAP_INPUT_H

# include "ft_define.h"
# include "ft_map_define.h"
# include "ft_map_util.h"
# include "ft_str_lib.h"
# include "ft_str_util.h"

char	*input_map_info_01(t_map *map, char *map_text);
char	*input_map_info_02(t_map *map, char *map_text);
char	*input_map_info_03(t_map *map, char *map_text);
char	*input_map_content(t_map *map, char *map_text);
char	*input_map_finish(char *map_text);
#endif
