/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihekim <jihekim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 18:44:40 by jihekim           #+#    #+#             */
/*   Updated: 2020/10/28 23:28:15 by jihekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i1;
	int i2;

	i1 = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i1] != '\0')
	{
		i2 = 0;
		while (str[i1 + i2] != '\0' && str[i1 + i2] == to_find[i2])
		{
			if (to_find[i2 + 1] == '\0')
			{
				return (&str[i1]);
			}
			i2++;
		}
		i1++;
	}
	return (0);
}
