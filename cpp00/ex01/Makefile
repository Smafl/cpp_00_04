
NAME = phonebook

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = phonebook.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(SRC)
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)
	@printf "compiled\n"

clean:
	@rm -f $(OBJ)
	@printf "cleaned\n"

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
