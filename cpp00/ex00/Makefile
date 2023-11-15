

NAME = a.out

OBJECT = $(MY_FILES:.cpp=.o)

CC = c++ -Wall -Wextra -Werror -std=c++98

MY_FILES = megaphone.cpp

all: $(NAME)

%.o: %.cpp
	$(CC) -o $@ -c  $< 

$(NAME): $(OBJECT) 
	$(CC) $^ -o $(NAME)

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re