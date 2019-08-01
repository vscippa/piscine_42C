/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 15:59:53 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/19 16:22:38 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int j;
	char c;
	
	j = 0;
	if (argc < 2)
	{
		write(1, "\n", 1);
	}
	else
	{
		while(argv[1][j] != '\0')
		{
			if (argv[1][j] >= 'A' && argv[1][j] <= 'Z')
			{		
				c = argv[1][j] - 'A' + 'a';
				write(1, &c, 1);
			}
			else
				write(1, &argv[1][j], 1);
			j++;
		}
		j++;
	}
	return (0);
}
