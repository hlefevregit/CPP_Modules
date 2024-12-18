# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/16 13:13:30 by hugolefevre       #+#    #+#              #
#    Updated: 2024/12/18 12:52:08 by hulefevr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	c++

CFLAGS	=	-Werror -Wall -Wextra -std=c++98 -Wno-shadow -g

SRC		=	main.cpp \
			Dog.cpp \
			Cat.cpp \
			Animal.cpp \
			AAnimal.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp \
			Brain.cpp \
			

NAME	=	AbstractClass

$(NAME)	:
			$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all		:	$(NAME)

clean	:
			rm -rdf $(OBJ)

fclean	:	clean
			rm -rdf $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re