/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/18 21:18:54 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/18 23:32:40 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_array_len(int argc, char **argv)
{
	int i;
	int j;
	int count;

	i = 1;
	j = 0;
	count = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			count++;
			j++;
		}
		count++;
		i++;
	}
	return (count);
}

char	*ft_concat_params(int argc, char **argv)
{
	int i;
	int j;
	int o;
	char *str;

	str = (char *)malloc(sizeof(char) * ft_array_len(argc, argv));
	i = 1;
	o = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			str[o] = argv[i][j];
			j++;
			o++;
		}
		if ((i + 1) < argc)
			str[o] = '\n';
		o++;
		i++;
	}
	str[o - 1] = '\0';
	return (str);
}

int		main(int argc,char **argv)
{
	char *str1;

	str1 = ft_concat_params(argc, argv);
	printf("%s \n", str1);
	printf("sizeof of array: %d\n", ft_array_len(argc, argv));
}
