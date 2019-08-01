/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 17:22:25 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/19 12:19:34 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *new_range;

	if (min >= max)
	{
		new_range = NULL;
		return (new_range);
	}
	if (!(new_range = (int *)malloc(sizeof(int) * (max - min))))
	{
		new_range = NULL;
		return (new_range);
	}
	i = min;
	while (i < max)
	{
		new_range[i] = i;
		i++;
	}
	return (new_range);
}

int		main(void)
{
	return (0);
}
