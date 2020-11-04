/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihekim <jihekim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 01:44:51 by jihekim           #+#    #+#             */
/*   Updated: 2020/11/04 13:09:00 by jihekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long num;
	long long i;

	num = nb;
	i = 2;
	if (num <= 0)
		return (0);
	if (num == 1)
		return (1);
	while (i <= ((nb / i) + 1))
	{
		if (i * i == num)
			return (i);
		i++;
	}
	return (--i);
}

int	ft_is_prime(int nb)
{
	int i;
	int sqrt;

	sqrt = ft_sqrt(nb);
	if (nb == 1 || nb == 0)
		return (0);
	i = 2;
	while (i <= sqrt)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int num;

	num = nb;
	while (1)
	{
		if (ft_is_prime(num))
			return (num);
		num++;
	}
	return (0);
}
