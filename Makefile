# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akremer <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/27 11:59:34 by akremer           #+#    #+#              #
#    Updated: 2018/11/27 17:47:14 by akremer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 	fillit

SRC = 	switch_input_output.c					\
		main.c									\
		ft_print_chelou.c						\
		ft_fillnew.c							

OBJ = $(SRC:.c=.o)

INCLUDES = fillit.h

all:	$(NAME)

$(NAME):
	@gcc -Wall -Werror -Wextra -I $(INCLUDES) -c $(SRC)
	@gcc $(OBJ) libft/libft.a -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
