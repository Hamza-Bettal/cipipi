NAME = phonebook

CC = c++

FLAGS = -Wall -Wextra -Werror 

RM = rm -f

SRC	=	contact.cpp phonebook.cpp


SRC_OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC_OBJ)
	$(NAME) $(SRC_OBJ)

clean:
	$(RM) $(SRC_OBJ)

fclean: clean
	$(RM) $(NAME)

%.o: %.c phonebook.hpp
	$(CC) $(FLAGS) -c $< 

re: fclean all

.PHONY:			clean