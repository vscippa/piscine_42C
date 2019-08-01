/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 16:29:12 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/22 17:16:14 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*tab2;

	i = 0;
	tab2 = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		tab2[i] = (*f)(tab[i]);
		i++;
	}
	return (tab2);
}
