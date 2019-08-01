/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 17:16:50 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/22 20:04:05 by vscippa          ###   ########.fr       */
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
	
	i = 0;
	while (tab[i])
	{
		if ((*f)(tab[i]) == 1)	
			return (1);
		i++;	
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int i;
	
	i = argc;
	//char **tab = {"okok","hell","mokk"};

	ft_any(argv, &ft_a);
	
}
