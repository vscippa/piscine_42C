/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 17:29:59 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/24 22:26:03 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*tmp;
	t_list	*t_begin;
	int		i;

	i = 1;
	t_begin = 0;
	tmp = 0;
	if (ac >= 2)
	{
		while (i < ac)
		{
			tmp = ft_create_elem(av[i]);
			tmp->next = t_begin;
			t_begin = tmp;
			i++;
		}
	}
	return (t_begin);
}
