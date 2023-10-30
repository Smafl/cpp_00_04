
NAME = animal

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC =		main.cpp \
			AMateria.cpp \
			Ice.cpp \
			Cure.cpp
HEADER =	AMateria.hpp \
			Ice.cpp \
			Cure.hpp
OBJ_DIR = obj
OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)

all: $(NAME)

$(OBJ_DIR)/%.o: %.cpp $(HEADER) Makefile
	@mkdir -p $(dir $@)
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
