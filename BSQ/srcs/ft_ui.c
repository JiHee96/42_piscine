/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ui.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukim <eukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 02:51:31 by eukim             #+#    #+#             */
/*   Updated: 2020/11/05 05:57:10 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ui.h"

int				ui_get_filenames(int argc, char *argv[], char ***f_names)
{
	int		i;
	int		file_count;
	char	*filename_buffer;

	filename_buffer = (char*)malloc(sizeof(char) * UI_F_BUF_SIZE);
	if (argc < 2)
	{
		if (read_input(filename_buffer, UI_F_BUF_SIZE) == FALSE)
			return (0);
		file_count = 1;
	}
	else
		file_count = argc - 1;
	*f_names = (char**)malloc(sizeof(char*) * file_count);
	i = 0;
	while (i < file_count)
	{
		(*f_names)[i] = (char*)malloc(sizeof(char) * UI_F_BUF_SIZE);
		argc < 2 ? ft_strcpy(*f_names[0], filename_buffer) :
			ft_strcpy((*f_names)[i], argv[1 + i]);
		++i;
	}
	filename_buffer != NULL ? free(filename_buffer) : (void)0;
	return (file_count);
}

t_error_code	ui_fill_map(t_map *map, char *filename)
{
	char			*map_buffer;

	map_buffer = (char*)malloc(sizeof(char) * UI_M_BUF_SIZE);
	if (map_buffer == NULL)
		return (ECODE_MALLOC_ERROR);
	if (read_file(filename, map_buffer, UI_M_BUF_SIZE) == FALSE)
	{
		free(map_buffer);
		return (ECODE_CAN_NOT_OPEN_FILE);
	}
	if (init_map(map, map_buffer) != ECODE_NO_ERROR)
	{
		free(map_buffer);
		return (ECODE_WRONG_MAP);
	}
	free(map_buffer);
	return (ECODE_NO_ERROR);
}

void			ui_s_n_p_map(int cnt, char **f_names, t_map *mp, t_square *sq)
{
	t_error_code	e_code;
	int				i;

	if (cnt == 0)
		print_map_error(ECODE_INPUT_ERROR);
	i = 0;
	while (i < cnt)
	{
		clear_map(mp);
		if ((e_code = ui_fill_map(mp, f_names[i])) != ECODE_NO_ERROR)
		{
			print_map_error(e_code);
		}
		else if (search_largest_square(mp, sq) == FALSE)
			print_map_error(ECODE_MAP_IS_NO_EMPTY);
		else
		{
			print_map(mp, sq);
			free_map(mp);
		}
		++i;
	}
}

void			ui_finish(int file_count, char ***filenames, t_map *map)
{
	int		i;

	if (*filenames == NULL)
		return ;
	i = 0;
	while (i < file_count)
	{
		free((*filenames)[i]);
		++i;
	}
	free(*filenames);
	*filenames = NULL;
	if (map != NULL)
		free_map(map);
}
