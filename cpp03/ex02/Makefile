# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/26 18:46:30 by kben-ham          #+#    #+#              #
#    Updated: 2023/12/02 15:31:21 by kben-ham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fragtrap

OBJECT = $(MY_FILES:.cpp=.o)

CC = c++ -Wall -Wextra -Werror -std=c++98

MY_FILES = main.cpp FragTrap.cpp ClapTrap.cpp ScavTrap.cpp
all: $(NAME)

%.o: %.cpp FragTrap.hpp ClapTrap.hpp ScavTrap.hpp
	$(CC) -o $@ -c  $< 

$(NAME): $(OBJECT) 
	$(CC) $^ -o $(NAME)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re