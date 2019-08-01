/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 12:02:57 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/16 14:33:59 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"
#include "stdio.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	
	index = 0;
	while (src[index] != '\0' && index < n )
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while((str[i]) != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(void)
{

	char str1[] = "HelloWorld";
	char str2[] = "abc";
	char *s;
	
	ft_putstr(str1);
	ft_putchar('\n');
	ft_putstr(str2);
	ft_putchar('\n');

	ft_putstr(ft_strncpy(str1, str2, 2));
	//ft_putstr(strncpy(str1, str2, 4));
	ft_putchar('\n');
	ft_putstr(str1);
	//ft_putstr(strcpy(str1,str2));
	//ft_putchar('\n');
	//ft_putstr(str2);

	return (0);
}
