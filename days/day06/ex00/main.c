/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 15:04:03 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/17 19:52:18 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	int a;
	int b;
	char str1[] = "Hello";
	char str2[] = "Hello";

	a = 1;
	b = 2;

	ft_putstr("Bonjour les amis");
	ft_putchar('\n');
	ft_swap(&a, &b);
	printf("%d \n", a);
	printf("%d \n", b);
	printf("%d \n", ft_strlen(str1));
	printf("%lu \n", strlen(str2));
	printf("%d \n", ft_strcmp("Hello", "Hello"));



	return (0);
}
