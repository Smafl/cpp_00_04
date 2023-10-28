
NAME = zombie

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

SRC =	main.cpp \
		Zombie.cpp \
		newZombie.cpp \
		randomChump.cpp
OBJ_DIR = obj
HEADER = Zombie.hpp
OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.cpp $(HEADER) Makefile
	@$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $^ -o $@
	@printf "compiled\n"

clean:
	@rm -rf $(OBJ_DIR)
	@printf "cleaned\n"

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
