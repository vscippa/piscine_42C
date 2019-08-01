/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 20:31:05 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/18 21:14:28 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

int		main(void)
{
	int **range1;
	int i;
	int j;
	int min;
	int max;
	
	*range1 = NULL;
	j = 0;
	min = 1;
	max = 7;
	i = ft_ultimate_range(range1, min, max);
	printf("%d \n", i);
	while (min < max)
	{
		printf("%d", range1[0][j]);
		j++;
		min++;
	}

	return (0);
}
