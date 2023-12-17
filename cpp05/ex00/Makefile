# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/08 18:52:53 by kben-ham          #+#    #+#              #
#    Updated: 2023/12/17 12:38:13 by kben-ham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureaucrat

OBJECT = $(MY_FILES:.cpp=.o)

CC = c++ -Wall -Wextra -Werror -std=c++98

MY_FILES = main.cpp Bureaucrat.cpp
all: $(NAME)

%.o: %.cpp Bureaucrat.hpp
	$(CC) -o $@ -c  $< 

$(NAME): $(OBJECT) 
	$(CC) $^ -o $(NAME)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re