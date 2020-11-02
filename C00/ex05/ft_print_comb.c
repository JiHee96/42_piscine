/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihekim <jihekim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 21:13:33 by jihekim           #+#    #+#             */
/*   Updated: 2020/10/21 22:33:17 by jihekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int n, int n2, int n3)
{
	ft_putchar(n + '0');
	ft_putchar(n2 + '0');
	ft_putchar(n3 + '0');
}

void	ft_print_comb(void)
{
	int n;
	int n2;
	int n3;

	n = 0;
	while (n <= 7)
	{
		n2 = n + 1;
		while (n2 <= 8)
		{
			n3 = n2 + 1;
			while (n3 <= 9)
			{
				ft_print_number(n, n2, n3);
				if (n < 7)
				{
					write(1, ", ", 2);
				}
				n3++;
			}
			n2++;
		}
		n++;
	}
}
