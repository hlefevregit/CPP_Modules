# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hulefevr <hulefevr@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/12 13:42:37 by hulefevr          #+#    #+#              #
#    Updated: 2024/08/12 14:06:03 by hulefevr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	c++

CFLAGS	=	-Werror -Wall -Wextra -std=c++98

SRC		=	newZombie.cpp \
			Zombie.cpp \
			randomChump.cpp \
			main.cpp \

#OBJ		=	$(SRC:.cpp=.o)

NAME	=	BraiiiiiiinnnzzzZ

$(NAME)	:	#$(OBJ)
			$(CC) $(CFLAGS) $(SRC) -o $(NAME)

all		:	$(NAME)

clean	:
			rm -rdf $(OBJ)

fclean	:	clean
			rm -rdf $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re