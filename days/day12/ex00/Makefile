# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vscippa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/25 17:21:22 by vscippa           #+#    #+#              #
#    Updated: 2019/07/25 22:15:22 by vscippa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_display_file.c
NAME = ft_display_file

all: make_lib

make_lib:
	gcc -o ft_display_file $(SRCS)

clean :
	/bin/rm -f *.o

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
