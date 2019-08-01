/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 18:02:59 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/11 23:11:39 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	int first;
	int second;
	int third;

	first = -1;
	while (++first <= 7)
	{
		second = first;
		while (++second <= 8)
		{
			third = second;
			while (++third <= 9)
			{
				ft_putchar(first + '0');
				ft_putchar(second + '0');
				ft_putchar(third + '0');
				if (first != 7 || second != 8 || third != 9)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
	ft_putchar('\n');
}
