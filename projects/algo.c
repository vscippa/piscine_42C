/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 23:11:22 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/31 16:17:39 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

/*
**	ret[0] = size of the biggest square, ret[1]= x of the topleft corner of
**	the biggest square, ret[2] = y of the topleft corner of the biggest square
*/

void	seek_square(t_boxinfo ***b, int h, int l, int *ret)
{
	int i;
	int j;
	int r;

	i = -1;
	while (++i < h - ret[0])
	{
		j = -1;
		while (++j < l - ret[0])
		{
			r = 0;
			while ((i + r < h) && (j + r < l)
					&& ((*b)[i + r][j + r].up >= r + 1)
					&& ((*b)[i + r][j + r].left >= r + 1))
			{
				r++;
				if (ret[0] < r)
				{
					ret[0] = r;
					ret[1] = i;
					ret[2] = j;
				}
			}
		}
	}
}

/*
**	pos[0] = x of the topleft corner of the biggest square,
**	pos[1] = y of the topleft corner of the biggest square
*/

void	fill_full(t_boxinfo ***b, int *pos, int size, char full)
{
	int i;
	int j;

	i = pos[0];
	while (i < pos[0] + size)
	{
		j = pos[1];
		while (j < pos[1] + size)
		{
			(*b)[i][j].state = full;
			j++;
		}
		i++;
	}
}
