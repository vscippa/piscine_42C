/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 21:23:30 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/23 17:21:59 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_sort_increasing(int *tab, int length, int(*f)(int, int))
{
	int i;

	i = 0;
	while (i < length)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_is_sort_decreasing(int *tab, int length, int(*f)(int, int))
{
	int i;

	i = 0;
	while (i < length)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	if (ft_is_sort_increasing(tab, length, f) == 1 || 
			ft_is_sort_decreasing(tab, length, f) == 1)
		return (1);
	else
		return (0);
}

int		ft_compare(int a, int b)
{
	if (a < b)
		return (-1);
	else if (a == b)
		return (0);
	else
		return (1);
}

int		main(void)
{
	int tab1[6] = {1, 2, 1, 4, 5, 6};
	int tab2[6] = {6, 5, 1, 3, 2, 1};

	printf("%d \n", ft_is_sort(tab1, 6, &ft_compare));
	printf("%d \n", ft_is_sort(tab2, 6, &ft_compare));

	return (0);
}
