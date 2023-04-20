SRCFILES	=	


OBJ = $(SRCFILES:.c = .o)

SRCFILESBONUS	=

OBJBONUS = $(SRCFILESBONUS:.c = .o)

NAME	= libft.a

COMPILER = cc

FLAGS = -Wall -Wextra -Werror

RM = rm -f

.PHONY: all, bonus, clean, fclean, re

all:$(NAME)

$(NAME) : $(OBJ)
 ar ac $(NAME) $(OBJ)
 RANLIB $(NAME)
	
BONUS : $(OJT) $(OBJBONUS)
	ar rc $(NAME) $(OBJBONUS) $(OBJ)
	ranlib $(NAME)

-%.o: &.c
	$(COMPILER) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ) $(OBJBONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
