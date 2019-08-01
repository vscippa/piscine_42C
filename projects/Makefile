# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lkrief <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/29 19:48:48 by lkrief            #+#    #+#              #
#    Updated: 2019/07/31 20:40:31 by lkrief           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

LIBNAME = bsq

SRC = create_box.c read_file.c algo.c display.c tools.c treatment.c

MAIN = main.c

all: $(NAME)

$(NAME):
	gcc -c -Wall -Wextra -Werror $(SRC)
	ar rc lib$(LIBNAME).a *.o
	gcc -Wall -Wextra -Werror -L. -l$(LIBNAME) $(MAIN) -o $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f lib$(LIBNAME).a
	/bin/rm -f $(NAME)

re: fclean all
