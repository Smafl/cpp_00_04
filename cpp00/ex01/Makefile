
NAME = phonebook

CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp\
		contact.cpp\
		phonebook.cpp
HEADER = phonebook.hpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(SRC) $(HEADER)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)
	@printf "compiled\n"

clean:
	@rm -f $(OBJ)
	@printf "cleaned\n"

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
