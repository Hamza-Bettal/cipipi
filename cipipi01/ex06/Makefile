NAME = harlFilter

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address

RM = rm -f

SRC	=		main.cpp		harl.cpp

SRC_OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(SRC_OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(SRC_OBJ)

clean:
	$(RM) $(SRC_OBJ)

fclean: clean
	$(RM) $(NAME)

%.o: %.cpp harl.hpp
	$(CC) $(FLAGS) -c $< -o $@

re: fclean all

.PHONY:			clean