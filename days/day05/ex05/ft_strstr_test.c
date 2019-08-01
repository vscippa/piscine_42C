/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 14:44:16 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/16 16:45:19 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"
#include "stdio.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int i;
	unsigned int pos;

	i = 0;
	pos = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[pos] != '\0')
	{
		if (str[pos] == to_find[0])
		{
			i = 1;
			while (to_find[i] != '\0' && str[pos + i] == to_find[i])
			{
				i++;
			}
			if (to_find[i] == '\0')
				return (str +pos);
		}
		pos++;
	}
	return (0);
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

	//char str1[] = "HelloWorld";
	//char str2[] = "abc";
	//char *s;

	char *largestring = "HelloWorld";
    char *smallstring = "l";
    char *ptr;

    //ptr = strstr(largestring, smallstring);
	ptr = ft_strstr(largestring, smallstring);
	ft_putstr(ptr);

	//ft_putchar('\n');
	//ft_putstr(str2);
	//ft_putchar('\n');

	//ft_putstr(ft_strncpy(str1, str2, 2));
	//ft_putstr(strncpy(str1, str2, 4));
	//ft_putchar('\n');
	//ft_putstr(str1);
	//ft_putstr(strcpy(str1,str2));
	//ft_putchar('\n');
	//ft_putstr(str2);

	return (0);
}
