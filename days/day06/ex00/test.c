/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 13:22:16 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/17 20:05:34 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int i;
	
	i = *a;
	*a = *b;
	*b = i;
}

int		main(void)
{
	int p;
	int q;

	p = 1;
	q = 2;

	ft_swap(&p, &q);
	printf("%d \n", p);
	printf("%d \n", q);
	return (0);
}
