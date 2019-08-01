/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 13:31:21 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/11 23:08:56 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_numbers(void)
{
	int digit;

	digit = 0;
	while (digit < 10)
	{
		ft_putchar(digit + '0');
		digit = digit + 1;
	}
	ft_putchar('\n');
}
