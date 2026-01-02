# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zajaddou <zajaddou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/02 11:16:15 by zajaddou          #+#    #+#              #
#    Updated: 2026/01/02 15:55:43 by zajaddou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = ClapTrap

CC      = c++
CFLAGS  = -Wall -Wextra -Werror -std=c++98

SRC     = main.cpp ClapTrap.cpp

OBJ     = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp ClapTrap.hpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

run: all clean
	@clear
	@./$(NAME)
	@rm $(NAME)