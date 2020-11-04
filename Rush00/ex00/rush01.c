/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychoi <ychoi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 11:13:30 by hyeonlee          #+#    #+#             */
/*   Updated: 2020/10/18 16:18:38 by hyeonlee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	top_edge(int x, int y, int width)
{
	if (x == 0 && y == 0)
		ft_putchar('/');
	else if (x == width && y == 0)
		ft_putchar('\\');
}

void	bottom_edge(int x, int y, int height, int width)
{
	if (x == 0 && y == height)
		ft_putchar('\\');
	else if (x == width && y == height)
		ft_putchar('/');
}

void	print_side(int x, int y, int width, int height)
{
	if (y == 0 || y == height)
		ft_putchar('*');
	else if (x == 0 || x == width)
		ft_putchar('*');
}

void	rush(int width, int height)
{
	int x;
	int y;

	if (width < 1 || height < 1)
		return ;
	width = width - 1;
	height = height - 1;
	y = -1;
	x = -1;
	while (++y <= height)
	{
		while (++x <= width)
		{
			if ((x == 0 && y == 0) || (x == width && y == 0))
				top_edge(x, y, width);
			else if ((x == 0 && y == height) || (x == width && y == height))
				bottom_edge(x, y, height, width);
			else if ((y == 0 || y == height) || (x == 0 || x == width))
				print_side(x, y, width, height);
			else
				ft_putchar(' ');
		}
		x = -1;
		ft_putchar('\n');
	}
}
