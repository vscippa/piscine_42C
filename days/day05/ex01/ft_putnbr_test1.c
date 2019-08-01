/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 12:58:28 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/15 15:33:13 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"

int		ft_count_str(char *str)
{
	int index;
	
	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	
	return (index);
}

void	ft_reverse_str(char *str)
{
	int index;

	index = ft_count_str(str);
	while (index >= 0)
	{
		ft_putchar(str[index]);
		index--;
	}
}

int		main(void)
{
//	char	str1[] = "Bonjour136xxckd";

//	ft_reverse_str(str1);
	
	int i;
	int index;
	char s[4];
	
	i = 265;
	index = 0;
	while (i != 0)
	{
		s[index] = (i % 10) + '0';
		i = i / 10;
		index++;
	}

	ft_reverse_str(s);
}

