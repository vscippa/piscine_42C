/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 14:53:05 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/14 20:14:14 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_display_line(char startchar, char midchar, char endchar, int x)
{
	int count;

	count = 0;
	while (count++ < x)
	{
		if (count == 1)
			ft_putchar(startchar);
		else if (count != 1 && count != x)
			ft_putchar(midchar);
		else if (count == x)
			ft_putchar(endchar);
	}
}

void	rush(int x, int y)
{
	int count;

	if (x > 0 && y > 0)
	{
		count = 0;
		while (count++ < y)
		{
			if (count == 1)
				ft_display_line('o', '-', 'o', x);
			else if (count != 1 && count != y)
				ft_display_line('|', ' ', '|', x);
			else if (count == y)
				ft_display_line('o', '-', 'o', x);
			ft_putchar('\n');
		}
	}
}
