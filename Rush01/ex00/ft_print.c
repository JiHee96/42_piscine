/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eukim <eukim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 17:04:20 by eukim             #+#    #+#             */
/*   Updated: 2020/10/25 10:45:40 by eukim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

void	print_number(int number)
{
	char c_number;

	if (number <= 0)
	{
		write(1, "-", 1);
		return ;
	}
	c_number = number + '0';
	write(1, &c_number, 1);
}
