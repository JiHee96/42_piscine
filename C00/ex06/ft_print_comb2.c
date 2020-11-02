/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihekim <jihekim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 22:38:39 by jihekim           #+#    #+#             */
/*   Updated: 2020/10/21 23:47:05 by jihekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int n;
	int n2;

	n = 0;
	while (n <= 98)
	{
		n2 = n + 1;
		while (n2 <= 99)
		{
			ft_putchar(n / 10 + '0');
			ft_putchar(n % 10 + '0');
			ft_putchar(' ');
			ft_putchar(n2 / 10 + '0');
			ft_putchar(n2 % 10 + '0');
			if (n == 98 && n2 == 99)
			{
				break ;
			}
			write(1, ", ", 2);
			n2++;
		}
		n++;
	}
}
