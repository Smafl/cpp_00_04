
NAME = human

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =	main.cpp\
		Weapon.cpp\
		HumanA.cpp
#		HumanB.cpp\
OBJ_DIR = obj
HEADER = Weapon.hpp HumanA.hpp #HumanB.hpp
OBJ = $(SRC:.cpp=$(OBJ_DIR)/.o)

all: $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(NAME): $(SRC)
	@$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)
	@printf "compiled\n"

$(OBJ_DIR)/%.o: %.c $(HEADER) Makefile | $(OBJ_DIR)
	@mkdir -p $(dir $@)
	@cc $(CXXFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@printf "cleaned\n"

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
