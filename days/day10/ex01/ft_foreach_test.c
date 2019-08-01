/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 13:11:35 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/22 16:20:55 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int a)
{
	if (a <0)
	{
		ft_putchar('-');
		ft_putnbr(-a);
	}
	if (a <= 9)
		ft_putchar(a + '0');
	else
	{
		ft_putnbr(a / 10);
		ft_putchar('0' + a % 10);
	}
}

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}

int		main(void)
{
	int tab[4] ={12, 133, 5855, 3};

	ft_foreach(tab, 4, &ft_putnbr);
}
