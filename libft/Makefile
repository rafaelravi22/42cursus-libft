COMPILER = cc
FLAGS = -Wall -Wextra -Werror
RM = rm -f

NAME = libft.a

SRC = 

OBJ = $(SRC:.c = .o)

all:$(NAME)

$(NAME): $(OBJ)
	$(COMPILER) $(FLAGS) -O $@ $^

-%.o: &.c
	$(COMPILER) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
