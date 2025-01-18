# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hulefevr <hulefevr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/16 13:13:30 by hugolefevre       #+#    #+#              #
#    Updated: 2025/01/18 14:39:26 by hulefevr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	c++

CFLAGS	=	-Werror -Wall -Wextra -std=c++98 -Wno-shadow

SRC		=	main.cpp \
			Dog.cpp \
			Cat.cpp \
			Animal.cpp \
			WrongAnimal.cpp \
			WrongCat.cpp \
			Brain.cpp \
			

NAME	=	DontLetTheWorldBurn

OBJ		=   $(SRC:.cpp=.o)

%.o:%.cpp
	@echo "📦 $(GREEN)Compilation de $<...$(RESET)"
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME)	: $(OBJ)
	@echo "🔧 $(GREEN)Compilation de $(NAME)...$(RESET)"
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@echo "✅ $(GREEN)Compilation terminée avec succès !$(RESET)"

all		:	$(NAME)

clean	:
	@echo "🧹 $(RED)Suppression des fichiers objets...$(RESET)"
	@rm -rf $(OBJ)

fclean	:	clean
	@echo "🗑️ $(RED) Suppression de l'exécutable...$(RESET)"
	@rm -rf $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re

#	COLOR SETTING	#############################################################
RESET   	=	\033[0m
GREEN     	=	\033[0;32m
RED			=	\033[0;31m
#################################################################################