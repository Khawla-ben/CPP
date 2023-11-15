

NAME = a.out

CC = c++

CFLAGS =  -Wall -Wextra -Werror -std=c++98

RM = rm -rf

MY_FILES =  megaphone.cpp

OBJECT = $(MY_FILES:.cpp=.o)


all: $(NAME)

%.o: %.cpp
	$(CC)  $(CFLAGS) -o $@ -c  $<

$(NAME): $(OBJECT)
	$(CC)  $(CFLAGS) $^ -o $(NAME)

clean:
	@$(RM) $(OBJECT)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re