/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihekim <jihekim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 15:10:25 by jihekim           #+#    #+#             */
/*   Updated: 2020/11/02 15:53:45 by jihekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_base(int nbr, char *base, unsigned int len)
{
	unsigned int	n;

	if (nbr < 0)
	{
		write(1, "-", 1);
		n = nbr * -1;
	}
	else
		n = nbr;
	if (n >= len)
		ft_base(n / len, base, len);
	write(1, &base[n % len], 1);
}

int		check_base(char *str)
{
	int i;
	int j;

	i = 0;
	if (str == '\0')
		return (0);
	if (ft_strlen(str) == 0 || ft_strlen(str) == 1)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int len;

	len = ft_strlen(base);
	if (!check_base(base))
		return ;
	ft_base(nbr, base, len);
}
