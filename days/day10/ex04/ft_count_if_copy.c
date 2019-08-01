/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 20:12:43 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/22 20:30:55 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_a(char *c)
{
	if (c[0] == 'a')
	{
		return (1);
	}
	else
		return (0);
}

int		ft_any(char **tab, int(*f)(char *))
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) == 1)
		{	
			count++;
		}
		i++;	
	}
	printf("%d \n", count);
	return (count);
}

int		main(int argc, char **argv)
{
	int i;
	
	i = argc;
	//char **tab = {"okok","hell","mokk"};

	ft_any(argv, &ft_a);
	
}
