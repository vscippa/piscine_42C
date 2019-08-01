/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 12:36:08 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/23 12:36:21 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int start;
	int neg;
	int nb;

	i = 0;
	start = 0;
	neg = 1;
	nb = 0;
	while (str[start] == ' ' || str[start] == '\n' || str[start] == '\t' || str[start] == '\r')
	{
		start++;
	}
	i = start;
	while (str[i] != '\0' && ((str[i] >= '0' && str[i] <= '9') || (i == start && (str[i] == '+' || str[i] == '-'))))
	{
		if (str[i] == '-')
			neg = (- 1);
		else if (str[i] == '+')
			neg = 1;
		else
			nb = ((nb * 10) + (str[i] - '0'));
		i++;
	}
	return (neg * nb);
}
