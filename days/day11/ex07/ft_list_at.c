/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 23:30:41 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/24 23:36:46 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if (!begin_list)
		return (0);
	else if (nbr == 0)
		return (begin_list);
	else
		return (ft_list_at(begin_list->next, nbr - 1));
}
