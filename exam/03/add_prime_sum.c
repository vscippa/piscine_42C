/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 19:11:46 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/28 21:43:12 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	else
	{
		while (i < nb)
		{
			if ((nb % i) == 0)
				return (0);
			i++;
		}
	}
	return (1);
}

int		ft_atoi(char *str)
{
	int nb;
	int i;

	nb = 0;
	i = 0;
	while (str[i] > '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb);
}

void	ft_putnbr(int nbr)
{
	char c;

	if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr(-nbr);
	}
	else if (nbr <= 9)
	{
		c = (nbr + '0');
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

int		main(int argc, char **argv)
{
	int i;
	int nbr;
	int sum;

	i = 0;
	nbr = 0;
	sum = 0;
	if (argc == 2 && ft_atoi(argv[1]) > 0)
	{
		nbr = ft_atoi(argv[1]);
		while (i <= nbr)
		{
			if (ft_is_prime(i) == 1)
				sum = (sum + i);
			i++;
		}
	}
	ft_putnbr(sum);
	write(1, "\n", 1);
	return (0);
}
