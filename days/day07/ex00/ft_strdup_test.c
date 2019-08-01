/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 16:04:34 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/18 17:13:59 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int		str_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		l;
	int		i;
	char	*str;

	i = 0;
	l = str_len(src);
	str = (char *)malloc(1 * (l + 1));
	while (i <= l)
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}

int		main(void)
{
	char *s1;
	char *s2;
	
	s1 = ft_strdup("");
	s2 =strdup("");
	printf("%s \n", s1);
	printf("%s \n", s2);
	return (0);
}
