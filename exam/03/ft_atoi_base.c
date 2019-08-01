/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 23:53:41 by vscippa           #+#    #+#             */
/*   Updated: 2019/08/01 01:58:47 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		nbr_inbase(char c, int base)
{
	if (base <= 10)
	{
		if (c >= '0' && c <= '9')
			return (c);
	}
	else
	{
		if ((c >= '0' && c <= '9') || (c >= 'A' && c <= ('A' +  base - 10)) || (c >= 'a' && c <= ('a' + base - 10)))
			return (c);
	}
	return (0);
}

int		ft_atoi_base(const char *str, int base)
{
	int i;
	int nbr;
	int sign;

	if (!str[0] || (base < 2 || base > 16))
		return (0);
	nbr = 0;
	sign = 1;
	while ((str[i] >= 0 && str[i] <= 47) || str[i] == 127)
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = - 1;
	while (str[i] && nbr_inbase(str[i], base))
	{	
		if (str[i] >= '0' && str[i] <= '9')
		{		
			nbr = (nbr * base) + str[i] - '0';
		}
		else if (str[i] >= 'A' && str[i] <= 'F')
		{
			nbr = (nbr * base) + (str[i] - 'A' + 10);
		}
		else if (str[i] >= 'a' && str[i] <= 'f')
		{
			nbr = (nbr * base) + (str[i] - 'a' + 10);
		}
		i++;
	}
	return (nbr * sign);
}

int		main(void)
{
	char *str;

	str = "12a";
	printf("%d", ft_atoi_base(str, 16));
	return (0);
}
