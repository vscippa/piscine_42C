/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 17:00:03 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/24 23:27:40 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_last(t_list *begin_list)
{
	t_list *tmp;

	if (!begin_list)
		return (0);
	tmp = begin_list;
	while (tmp->next)
		tmp = tmp->next;
	return (tmp);
}
