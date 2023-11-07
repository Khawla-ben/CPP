# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kben-ham <kben-ham@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 17:18:46 by kben-ham          #+#    #+#              #
#    Updated: 2023/11/07 17:58:44 by kben-ham         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out

SRCS = main.cpp Contact.cpp PhoneBook.cpp
CPP = c++

HEADERS = Contact.hpp PhoneBook.hpp
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
    # $(CPP) $(CPPFLAGS) $^ -o $@

%.o : %.cpp $(HEADERS)
    # $(CPP) $(CPPFLAGS) -c $< -o $@

clean :
    rm -rf $(OBJS)

fclean : clean
    rm -rf $(NAME)

re : fclean all