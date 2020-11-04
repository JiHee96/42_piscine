/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihekim <jihekim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:51:36 by jihekim           #+#    #+#             */
/*   Updated: 2020/11/04 20:55:02 by jihekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_str(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_size(int num)
{
	char c;

	if (!num)
		return ;
	if (num < 10)
	{
		c = num + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_size(num / 10);
		ft_size(num % 10);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int i;

	i = 0;
	while (par[i].str != '\0')
	{
		ft_str(par[i].str);
		write(1, "\n", 1);
		if (par[i].size)
			ft_size(par[i].size);
		else
			write(1, "0", 1);
		write(1, "\n", 1);
		ft_str(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
