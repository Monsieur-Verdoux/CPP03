# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/19 21:43:19 by akovalev          #+#    #+#              #
#    Updated: 2024/09/19 21:57:13 by akovalev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := FragTrap
CFLAGS := -Wall -Wextra -Werror
SRC := main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp
OBJ := $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	@c++ $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	@c++ $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re