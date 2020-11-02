/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihekim <jihekim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 22:20:36 by jihekim           #+#    #+#             */
/*   Updated: 2020/10/31 22:56:30 by jihekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar2(void)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
}

void	ft_putnbr(int nb)
{
	int arr[10];
	int i;

	i = 0;
	if (nb < 0 && nb != -2147483648)
	{
		nb = -1 * nb;
		ft_putchar('-');
	}
	if (nb == -2147483648)
		ft_putchar2();
	else
	{
		if (nb == 0)
		{
			ft_putchar(0 + '0');
		}
		while (nb)
		{
			arr[i++] = nb % 10;
			nb = nb / 10;
		}
		while (i--)
			ft_putchar(arr[i] + '0');
	}
}
