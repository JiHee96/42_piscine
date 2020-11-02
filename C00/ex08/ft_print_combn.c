/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihekim <jihekim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 02:48:06 by jihekim           #+#    #+#             */
/*   Updated: 2020/10/22 04:41:40 by jihekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print1(int n2, int *arr)
{
	int i;

	i = 0;
	while (i < n2)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
}

void	ft(int n1, int n2, int n, int *arr)
{
	int i;

	i = n1;
	if (n2 == n)
	{
		print1(n2, arr);
		if (arr[0] == 10 - n && arr[n - 1] == 9)
			return ;
		ft_putchar(',');
		ft_putchar(' ');
		return ;
	}
	while (i < 10)
	{
		arr[n2] = i;
		ft(i + 1, n2 + 1, n, arr);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];
	int i;

	i = 0;
	while (i < 10)
	{
		arr[i] = -1;
		i++;
	}
	ft(0, 0, n, arr);
}
