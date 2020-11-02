/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihekim <jihekim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 05:27:35 by jihekim           #+#    #+#             */
/*   Updated: 2020/10/31 13:26:59 by jihekim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	count1(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int dest_len;
	unsigned int src_len;
	unsigned int i;
	unsigned int j;

	i = 0;
	dest_len = count1(dest);
	src_len = count1(src);
	j = dest_len;
	if (size < dest_len)
	{
		src_len = src_len + size;
		return (src_len);
	}
	else if (size == 0)
		return (src_len);
	else
	{
		while (src[i] != '\0' && (i + dest_len + 1) < size)
			dest[j++] = src[i++];
		dest[j] = '\0';
		src_len = src_len + dest_len;
		return (src_len);
	}
}
