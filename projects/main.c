/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 16:24:02 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/31 20:44:08 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int	main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 1)
	{
		ft_copy_stdin();
		if (!(treatment("tmp")))
			write(2, "map error\n", 10);
	}
	else
	{
		while (i < argc)
		{
			if (!(treatment(argv[i])))
				write(2, "map error\n", 10);
			if (i < argc - 1)
				write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
