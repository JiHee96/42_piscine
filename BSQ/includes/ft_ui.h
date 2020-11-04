/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ui.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukim <eukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 02:51:46 by eukim             #+#    #+#             */
/*   Updated: 2020/11/05 00:38:15 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UI_H
# define FT_UI_H

# include "ft_define.h"
# include "ft_input.h"
# include "ft_map_define.h"
# include "ft_map_error.h"
# include "ft_map_output.h"
# include "ft_map_search.h"
# include "ft_map_util.h"
# include "ft_str_lib.h"
# include "ft_ui_define.h"
# include <stdlib.h>

int				ui_get_filenames(int argc, char *argv[], char ***f_names);
t_error_code	ui_fill_map(t_map *map, char *filename);
void			ui_s_n_p_map(int cnt, char **f_names, t_map *mp, t_square *sq);
void			ui_finish(int file_count, char ***filenames, t_map *map);

#endif
