/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscippa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 16:46:57 by vscippa           #+#    #+#             */
/*   Updated: 2019/07/16 16:52:53 by vscippa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
				return (str + pos);
		}
		pos++;
	}
	return (0);
}
