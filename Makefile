# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miguel <miguel@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/17 01:26:28 by miguel            #+#    #+#              #
#    Updated: 2020/02/17 01:53:46 by miguel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME:= snake
SRCS:= fill_structs.c gameloop.c init.c input.c print_field.c snake.c update.c

CC:= gcc
LIB = -lncurses

all: $(NAME)

$(NAME):
		$(CC) $(LIB) $(SRCS) -o $(NAME)

clean:
		rm snake


