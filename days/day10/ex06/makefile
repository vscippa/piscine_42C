# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vscippa <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/23 16:37:01 by vscippa           #+#    #+#              #
#    Updated: 2019/07/23 16:49:11 by vscippa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRCS = srcs/main.c

all : make_lib

make_lib :
	gcc $(SRCS) -o  $(NAME)

clean :
	/bin/rm -f $(NAME)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
