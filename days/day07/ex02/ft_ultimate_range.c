/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 20:31:05 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/18 20:57:24 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *table;
	int i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	table = (int *)malloc(sizeof(int) * (max - min));
	if (table == NULL)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	while (min < max)
	{
		table[i] = min;
		min++;
		i++;
	}
	*range = table;
	return (i);
}
