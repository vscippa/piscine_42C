# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vscippa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/22 12:02:47 by vscippa           #+#    #+#              #
#    Updated: 2019/07/25 17:32:21 by vscippa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
HEADER_FOLDER = includes/

all : make_lib

make_lib :
	gcc -I$(HEADER_FOLDER) -c $(SRCS)
	ar -rv $(NAME) $(OBJECTS)	

clean :
	/bin/rm -f *.o

fclean : clean
	/bin/rm -f $(NAME)

re: fclean all
