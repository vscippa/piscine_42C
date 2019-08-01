/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 22:17:05 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/13 23:30:57 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int nb_power;

	if (power < 0)
	{
		return (0);
	}
	else
	{
		nb_power = nb;
		while (power > 1)
		{
			nb_power = nb_power * nb;
			power = power - 1;
		}
		return (nb_power);
	}
}
