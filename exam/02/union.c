/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 17:07:47 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/28 17:19:12 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_no_dbl(char *str, int index)
{
	int i;

	i = 0;
	while (i < index)
	{
		if (str[i] == str[index])
			return (0);
		i++;
	}
	return (1);
}

int		ft_is_in_str(char *str, char c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (ft_no_dbl(argv[1], i) == 1)
				write(1, &argv[1][i], 1);
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (ft_is_in_str(argv[1], argv[2][i]) == 1 && ft_no_dbl(argv[2], i) == 1)
				write(1, &argv[2][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
