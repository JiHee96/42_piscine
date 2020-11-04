/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_print.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukim <eukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 18:43:28 by eukim             #+#    #+#             */
/*   Updated: 2020/10/25 10:45:35 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MAP_PRINT_H
# define FT_MAP_PRINT_H

# include <unistd.h>
# include "ft_define.h"
# include "ft_print.h"

void	print_map(char **map);
void	print_map_with_edge_(char **map);
void	print_map_without_edge_(char **map);

#endif
