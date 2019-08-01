/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 23:23:53 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/31 23:50:05 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	int flg;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i])
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
				flg = 1;
			if (argv[1][i] != ' ' && argv[1][i] != '\t')
			{
				if (flg == 1)
					write(1, "   ", 3);
				write(1, &argv[1][i], 1);
				flg = 0;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
