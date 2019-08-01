/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 17:29:59 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/24 20:13:45 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->data);
		list = list->next;
	}
}

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*tmp;
	t_list	*t_begin;
	int		i;

	i = 1;
	t_begin = 0;
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

int		main(int argc,char **argv)
{
	t_list *begin;

	begin = ft_list_push_params(argc, argv);
	ft_print_list(begin);
	return (0);
}
