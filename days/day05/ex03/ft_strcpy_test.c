/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 22:35:55 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/16 12:00:43 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"
#include "stdio.h"
#include <stdlib.h>
#include <string.h>



char	*ft_strcpy(char *dest, char *src)
{
	unsigned int index;
	
	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = src[index];
	return (dest);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while((str[index]) != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

int		main(void)
{

	//char str1[]="Bonjour";
	//char str2[]="ooo";
	//char *s;
	int i1;
	unsigned int i2;	

	i1 = 12;
	i2 = 13;
	ft_putchar(i1);
	ft_putchar('\n');
	ft_putchar(i2);
	//ft_putchar('\n');

	//ft_putstr(ft_strcpy(str1, str2));
	//ft_putchar('\n');
	//ft_putstr(str1);
	//ft_putstr(strcpy(str1,str2));
	//ft_putchar('\n');
	//ft_putstr(str2);

	return (0);
}
