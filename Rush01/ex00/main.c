/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukim <eukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 09:40:37 by eukim             #+#    #+#             */
/*   Updated: 2020/10/25 11:37:56 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "ft_define.h"
#include "ft_input_check.h"
#include "ft_map_input.h"
#include "ft_map_print.h"
#include "ft_map_tool.h"

int		main(int argc, char *argv[])
{
	char	**map;

	if (check_input(argc, argv) == RETURN_FALURE)
	{
		write(1, "ERROR\n", 6);
		return (0);
	}
	malloc_map(&map);
	input_map_edge(map, argv);
	if (fill_correct_box(map) == RETURN_SUCCESS)
		print_map(map);
	else
		write(1, "ERROR\n", 6);
	free_map(&map);
	return (0);
}
