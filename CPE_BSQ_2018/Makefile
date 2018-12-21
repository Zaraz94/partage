##
## EPITECH PROJECT, 2018
## makefile
## File description:
## simple makefile
##

CC	=	gcc -Wall -Wextra -W

SRC	=	SRC/main.c 	\
		SRC/find_size_map.c 	\
		SRC/cp_map_in_str.c 	\
		SRC/delete_first_line.c \
		SRC/my_strlen.c 		\
		SRC/change_str_to_tab.c \
		SRC/change_0_1.c 		\
		SRC/find_max_square.c 	\
		SRC/make_algo.c 		\
		SRC/find_line_colum.c 	\
		SRC/change_to_0_1.c 	\
		SRC/add_square.c 		\
		SRC/my_putchar.c 		\
		SRC/print_square.c

OBJ	=	$(SRC:.c=.o)

NAME	=	bsq

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re