# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/26 18:51:08 by kben-ham          #+#    #+#              #
#    Updated: 2023/11/26 18:51:11 by kben-ham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Zombie

CC = c++

CFLAGS =  -Wall -Wextra -Werror -std=c++98

RM = rm -rf

MY_FILES =  main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

OBJECT = $(MY_FILES:.cpp=.o)

HEADERS = Zombie.hpp

all: $(NAME)

%.o: %.cpp $(HEADERS)
	$(CC)  $(CFLAGS) -o $@ -c  $<

$(NAME): $(OBJECT)
	$(CC)  $(CFLAGS) $^ -o $(NAME)

clean:
	@$(RM) $(OBJECT)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re