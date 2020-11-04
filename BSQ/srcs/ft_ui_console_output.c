/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ui_console_output.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukim <eukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 01:01:11 by eukim             #+#    #+#             */
/*   Updated: 2020/11/05 01:01:24 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ui_console_output.h"

void	print_console_newline(int line)
{
	int		i;

	i = 0;
	if (line <= 0)
		line = 80;
	while (i++ < line)
	{
		write(1, "\n", 1);
	}
}

void	print_console_cat(void)
{
	write(1, "********************************************************\n", 57);
	write(1, "                                       .';l:.           \n", 57);
	write(1, "                                    .,lxOkOx'           \n", 57);
	write(1, "                                  .ck0000OOk,           \n", 57);
	write(1, "......                          .cO000000000;           \n", 57);
	write(1, ".:xkkxdoc,.           ..',;::clok00O000KKKK0c           \n", 57);
	write(1, "  :xxkOO0KOxc.   ..;cokkkO0000000000KKKKKKKKd.          \n", 57);
	write(1, "  .okkO0000KKOc;ldk0KKXK000000KKKKKKKKKKKKKKO;          \n", 57);
	write(1, "   ,k000000000K0OkOO0KNNKkkO000OOO00OOOO0KKKKOdlc;.     \n", 57);
	write(1, "   .dK0000000O0000O00XNNXOk0000000OxdddxO0KXXXKKKK0x;   \n", 57);
	write(1, "    :0KKK0000OOOO00KXNWWNXKK000kdc;,'',:coxO0KXXKKKKKo. \n", 57);
	write(1, "    'k00000OOOkkkkO0XWWWWNXKKKx,':;'co;'cclk00KKXXKKKKl.\n", 57);
	write(1, "    .d0000Oxl;,'''',lOXNWWXXNXd;ox;.';..,oOXXK000KK000x'\n", 57);
	write(1, "    .l000ko;,,'.:lc:';kXNWNNNNxlxxo:'..,ok00OO00000000k,\n", 57);
	write(1, "    .o00ko:cl' .';cxd:oKNWWWWWKkxxxkkxdxkkkkO0KKKKKK00O;\n", 57);
	write(1, "    :xO0OOxoo;....lddxOXWWWWWWNNXKXKK0OOOO0KKKXXXXK0OOk;\n", 57);
	write(1, "   .lxkOO0KOkxdloxOO0XNNNNNXXXXNWWWWWNNXXXXXXXXKKKKK0Ox'\n", 57);
	write(1, "   .oxkkO0OOOOOOOKXNWWWNXOOOOkOXWWWWWWWNNNNNXXK000000Ol.\n", 57);
	write(1, "   .lxxkOOOOkkkk0XNWWWWNNX0OkO0KXXXXXXXNNXXXXK0OkkkkOx' \n", 57);
	write(1, "   .cxxOO0OOkkk0KNNNWNNNNXK0OkO0KKXXXXNNNXXXK0kxdddxx,  \n", 57);
	write(1, "********************************************************\n", 57);
}

void	print_console_question(void)
{
	write(1, "HUMAN, WHERE IS MY MAP_FILE?\n\n> ", 32);
}

void	print_console(void)
{
	print_console_newline(0);
	print_console_cat();
	print_console_newline(2);
	print_console_question();
}
