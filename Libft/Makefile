# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfockede <tfockede@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/11 15:02:42 by tfockede          #+#    #+#              #
#    Updated: 2022/01/11 15:02:42 by tfockede         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
FLAGS	= -Werror -Wall -Wextra
FILES	= *.c

OBJ		=  $(FILES:.c=.o)

%.o: %.c
	gcc $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re