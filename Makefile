flasg = -Wall -Wextra -Werror -g

NAME = libftprintf.a
SRC = print_percent.c print_util.c
OBJ = $(SRC:.c=.o)

all : $(NAME)
	gcc $(flag) main.c $(NAME) && ./a.out
$(NAME) : $(OBJ)
	ar rcs $(NAME) $?

.c.o :
	gcc $(flag) -o $@ -c $<

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all