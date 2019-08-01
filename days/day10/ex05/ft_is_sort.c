/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 21:23:30 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/23 17:25:29 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort_i(int *tab, int length, int (*f)(int, int))
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

int		ft_is_sort_d(int *tab, int length, int (*f)(int, int))
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

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (ft_is_sort_i(tab, length, f) == 1 || ft_is_sort_d(tab, length, f) == 1)
		return (1);
	else
		return (0);
}
