/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 13:32:35 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/31 20:46:37 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers.h"

int		ft_check_fd(char *filename)
{
	int		fd;

	fd = open(filename, O_RDONLY);
	if (fd != -1 && close(fd) != -1)
		return (1);
	return (0);
}

int		ft_length_line_0(char *filename)
{
	int		fd;
	char	c;
	int		count;
	int		ret;

	fd = open(filename, O_RDONLY);
	ret = read(fd, &c, 1);
	count = ret;
	while (ret)
	{
		if (c == '\n')
			break ;
		ret = read(fd, &c, 1);
		count += ret;
	}
	close(fd);
	return (count);
}

int		ft_length_line_1(char *filename, int **d)
{
	int		fd;
	char	c;
	int		count;
	int		ret;

	fd = open(filename, O_RDONLY);
	ret = read(fd, &c, 1);
	count = 0;
	while ((c != '\n') && ret)
		ret = read(fd, &c, 1);
	while (ret)
	{
		ret = read(fd, &c, 1);
		if (c != '\n')
			count += ret;
		else
			break ;
	}
	close(fd);
	(*d)[1] = count;
	return (count);
}

int		ft_height(char *filename, int **d)
{
	int		fd;
	int		ret;
	int		length;
	char	*buf;

	length = ft_length_line_0(filename);
	ft_length_line_1(filename, d);
	fd = open(filename, O_RDONLY);
	if (length < 4)
		(*d)[0] = 0;
	else
	{
		buf = (char *)(malloc(sizeof(char) * (length - 3 + 1)));
		ret = read(fd, buf, length - 4);
		buf[ret] = '\0';
		(*d)[0] = ft_atoi(buf);
		free(buf);
	}
	return (fd);
}

int		ft_leg(int fd, char **leg)
{
	char	buf[4];

	read(fd, buf, 3);
	buf[3] = '\0';
	(*leg)[0] = buf[0];
	(*leg)[1] = buf[1];
	(*leg)[2] = buf[2];
	(*leg)[3] = '\0';
	read(fd, buf, 1);
	return (fd);
}
