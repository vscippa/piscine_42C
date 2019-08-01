/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   treatment.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 15:59:50 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/31 20:45:30 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int		treatment(char *filename)
{
	t_boxinfo	**b;
	int			*d;
	int			*sol;
	char		*leg;
	int			fd;

	if (ft_check_fd(filename))
	{
		d = (int *)malloc(sizeof(int) * 2);
		leg = (char *)malloc(sizeof(char) * 4);
		sol = (int *)malloc(sizeof(int) * 3);
		fd = ft_leg(ft_height(filename, &d), &leg);
		if (read_n_fill(&b, d, fd, leg))
			aux_treatment(&b, d, leg, sol);
		else
			return (0);
		free_all(d, sol, leg, b);
	}
	else
		return (0);
	close(fd);
	return (1);
}

void	aux_treatment(t_boxinfo ***b, int *d, char *leg, int *sol)
{
	seek_square(b, d[0], d[1], sol);
	fill_full(b, sol + 1, sol[0], leg[2]);
	display_grid(b, d[0], d[1]);
}
