/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_box.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 13:37:22 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/31 20:36:19 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

void	generation(t_boxinfo ***b, int h, int l)
{
	int i;
	int j;

	i = 0;
	(*b) = (t_boxinfo **)(malloc(sizeof(t_boxinfo *) * h));
	while (i < h)
	{
		(*b)[i] = (t_boxinfo *)(malloc(sizeof(t_boxinfo) * l));
		j = 0;
		while (j < l)
		{
			(*b)[i][j].up = 0;
			(*b)[i][j].left = 0;
			j++;
		}
		i++;
	}
}

/*
** on suppose que la case que l'on remplit
** est vide car si obstacle, elle a direct 0 0
*/

void	fill_box(t_boxinfo ***b, int x, int y)
{
	if ((x > 0) && (y > 0))
	{
		(*b)[x][y].up = (*b)[x - 1][y].up + 1;
		(*b)[x][y].left = (*b)[x][y - 1].left + 1;
	}
	else if ((x == 0) && (y > 0))
	{
		(*b)[0][y].up = 1;
		(*b)[0][y].left = (*b)[0][y - 1].left + 1;
	}
	else if ((x > 0) && (y == 0))
	{
		(*b)[x][0].up = (*b)[x - 1][y].up + 1;
		(*b)[x][0].left = 1;
	}
	else
	{
		(*b)[0][0].up = 1;
		(*b)[0][0].left = 1;
	}
}

/*
** le tableau legende pris en argument correspondra a leg[0] = vide,
** leg[1] = obstacle il faudra que l'on fasse pointer le read sur la
** premiere ligne du plateau, ie, sur la deuxieme de notre fichier
** d[] = dimensions, d[0] = h, d[1] = l
*/

int		read_n_fill(t_boxinfo ***b, int *d, int fd, char *leg)
{
	int		n;
	char	buf;

	n = 0;
	generation(b, d[0], d[1]);
	if ((d[0] < 1) || (d[1] < 1))
		return (0);
	while (read(fd, &buf, 1))
	{
		if (n / (d[1] + 1) == d[0])
			return (0);
		(*b)[n / (d[1] + 1)][n % (d[1] + 1)].state = buf;
		if ((n % (d[1] + 1) != d[1]) && (buf == leg[0]))
			fill_box(b, n / (d[1] + 1), n % (d[1] + 1));
		else if ((n % (d[1] + 1) != d[1]) && (buf != leg[1]))
			return (0);
		if (((n % (d[1] + 1) == d[1]) && (buf != '\n'))
				|| (n >= d[0] * (d[1] + 1)))
			return (0);
		n++;
	}
	if ((n < d[0] * (d[1] + 1) || (n == 0)))
		return (0);
	return (1);
}

void	free_all(int *d, int *sol, char *leg, t_boxinfo **b)
{
	int i;

	i = -1;
	free(sol);
	free(leg);
	while (++i < d[0])
	{
		free(b[i]);
		i++;
	}
	free(b);
	free(d);
}
