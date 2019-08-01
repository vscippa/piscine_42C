/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 11:35:59 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/23 16:52:42 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	int i;
	int start;
	int neg;
	int nb;

	start = 0;
	nb = 0;
	while (str[start] == ' ' || str[start] == '\n' ||
			str[start] == '\t' || str[start] == '\r')
	{
		start++;
	}
	i = start;
	while (str[i] != '\0' && ((str[i] >= '0' && str[i] <= '9') ||
				(i == start && (str[i] == '+' || str[i] == '-'))))
	{
		if (str[i] == '-')
			neg = (-1);
		else if (str[i] == '+')
			neg = 1;
		else
			nb = ((nb * 10) + (str[i] - '0'));
		i++;
	}
	return (neg * nb);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nbr);
	}
	else if (nbr <= 9)
		ft_putchar('0' + nbr);
	else
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			ft_putnbr((ft_atoi(argv[1]) + ft_atoi(argv[3])));
		else if (argv[2][0] == '-')
			ft_putnbr((ft_atoi(argv[1]) - ft_atoi(argv[3])));
		else if (argv[2][0] == '/')
			if (ft_atoi(argv[3]) == 0)
				ft_putstr("Stop : division by zero");
			else
				ft_putnbr((ft_atoi(argv[1]) / ft_atoi(argv[3])));
		else if (argv[2][0] == '%')
			if (ft_atoi(argv[3]) == 0)
				ft_putstr("Stop : modulo by zero");
			else
				ft_putnbr((ft_atoi(argv[1]) % ft_atoi(argv[3])));
		else if (argv[2][0] == '*')
			ft_putnbr((ft_atoi(argv[1]) * ft_atoi(argv[3])));
	}
	return (0);
}
