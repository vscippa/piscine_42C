/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 16:29:12 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/22 17:11:01 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_carre(int *tab, int length)
{
	int i;
	int *tab2;
	
	i = 0;
	tab2 = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		tab2[i] = (tab[i] * tab[i]);
		i++;
	}
	return (tab2);
}

int		ft_carre1(int p)
{
	return (p * p);
}

int		*ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int *tab2;

	i = 0;
	tab2 = (int*)malloc(sizeof(int) * length);
	while (i< length)
	{
		tab2[i] = (*f)(tab[i]);
		i++;
	}
	return (tab2);
}

int		main(void)
{
	int i;
	int *tabx;	
	
	int tab[5] = {1, 2, 3, 4, 5};
	i = 0;
	tabx = ft_map(tab, 5, &ft_carre1);

	while (i < 5)
	{
		printf("%d \n", tabx[i]);
		i++;
	}
	return (0);
}
