# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/02 14:40:29 by kben-ham          #+#    #+#              #
#    Updated: 2023/12/02 16:15:16 by kben-ham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = trap

OBJECT = $(MY_FILES:.cpp=.o)

CC = c++ -Wall -Wextra -Werror -std=c++98

MY_FILES = main.cpp ClapTrap.cpp 
all: $(NAME)

%.o: %.cpp ClapTrap.hpp
	$(CC) -o $@ -c  $< 

$(NAME): $(OBJECT) 
	$(CC) $^ -o $(NAME)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re