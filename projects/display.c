/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 01:36:07 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/31 16:34:47 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	display_box(t_boxinfo ***b, int x, int y)
{
	write(1, "(", 1);
	ft_putnbr((*b)[x][y].up);
	write(1, ",", 1);
	ft_putnbr((*b)[x][y].left);
	write(1, ")", 1);
}

void	display_info(t_boxinfo ***b, int h, int l)
{
	int i;
	int j;

	i = 0;
	while (i < h)
	{
		j = 0;
		while (j < l)
		{
			display_box(b, i, j);
			j++;
		}
		if (i < h - 1)
			write(1, "\n", 1);
		i++;
	}
}

void	display_grid(t_boxinfo ***b, int h, int l)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < h)
	{
		j = 0;
		while (j < l)
		{
			c = (*b)[i][j].state;
			write(1, &c, 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	if (i < h - 1)
		write(1, "\n", 1);
}
