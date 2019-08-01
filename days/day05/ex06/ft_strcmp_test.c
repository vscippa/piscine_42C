/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 14:44:16 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/17 14:19:35 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putchar.c"
#include "stdio.h"
#include <stdlib.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	unsigned int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		//if (s1[i] == '\0')
			//return (0);
		i++;
	}
	return (s1[i] - s2[i]);
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

	//char str1[] = "Hell";
	//char str2[] = "abc";
	//char *s;

	char *str1 = "";
    char *str2 = "";
    int i;	

    //i = strcmp(str1, str2);
	//printf("%d \n", str1[0] - str2[0]);
	//printf("%d", strcmp(str1, str2));
	//ft_putchar('\n');
	printf("%d \n", ft_strcmp(str1, str2));
	//ptr = ft_strstr(largestring, smallstring);
	//ft_putstr(ptr);

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
