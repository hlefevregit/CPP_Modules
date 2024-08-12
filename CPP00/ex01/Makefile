# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hugolefevre <hugolefevre@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/09 13:47:14 by hugolefevre       #+#    #+#              #
#    Updated: 2024/08/09 14:37:47 by hugolefevre      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	c++

CFLAGS	=	-Werror -Wall -Wextra -std=c++98

SRC		=	phoneBook.cpp \
			main.cpp \
			Contact.cpp \

#OBJ		=	$(SRC:.cpp=.o)

NAME	=	phoneBook

$(NAME)	:	#$(OBJ)
			$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all		:	$(NAME)

clean	:
			rm -rdf $(OBJ)

fclean	:	clean
			rm -rdf $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re