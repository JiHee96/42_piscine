/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ui_console_output.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukim <eukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 01:01:34 by eukim             #+#    #+#             */
/*   Updated: 2020/11/05 01:01:36 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UI_CONSOLE_OUTPUT_H
# define FT_UI_CONSOLE_OUTPUT_H

# include "ft_ui_define.h"
# include <unistd.h>

void	print_console_newline(int line);
void	print_console_cat(void);
void	print_console_question(void);
void	print_console(void);

#endif
