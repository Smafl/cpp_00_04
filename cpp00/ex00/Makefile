
NAME = megaphone

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp
OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $^ -o $@
	@printf "compiled\n"

clean:
	@rm -f $(OBJ)
	@printf "cleaned\n"

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
