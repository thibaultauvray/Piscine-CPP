NAME = a.out

SRC = main.cpp\

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
			clang++ -Wall -Werror -Wextra -o $(NAME) $(OBJ)

$(OBJ): $(SRC)
			clang++ -Wall -Wextra -Werror -c $(SRC)

clean:
			rm -rf $(OBJ)

fclean: clean
			rm -rf $(NAME)

re: fclean all
