/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 12:11:50 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/26 12:53:30 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_last_word(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == ' ' && (str[i+1] > 32 && str[i+1] < 127))
		{
			j = i + 1;
		}
		i++;
	}

	while (str[j] > 32 && str[j] < 127)
	{
		write(1, &str[j], 1);
		j++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_last_word(argv[1]);
	write(1, "\n", 1)
	return (0);
}

