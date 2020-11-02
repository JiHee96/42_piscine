/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihekim <jihekim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 02:20:21 by jihekim           #+#    #+#             */
/*   Updated: 2020/10/31 22:16:51 by jihekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int upper;

	i = 0;
	upper = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
						|| (str[i] >= 'A' && str[i] <= 'Z')
						|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (upper && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!upper && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			upper = 0;
		}
		else
			upper = 1;
		i++;
	}
	return (str);
}
