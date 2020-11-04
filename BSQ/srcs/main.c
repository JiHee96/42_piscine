/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukim <eukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 10:04:49 by eukim             #+#    #+#             */
/*   Updated: 2020/11/05 01:02:41 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ui.h"
#include <stdlib.h>

int		main(int argc, char *argv[])
{
	t_map			map;
	t_square		square;
	int				map_count;
	char			**filenames;

	filenames = NULL;
	map_count = ui_get_filenames(argc, argv, &filenames);
	ui_s_n_p_map(map_count, filenames, &map, &square);
	ui_finish(map_count, &filenames, &map);
	exit(EXIT_SUCCESS);
}
