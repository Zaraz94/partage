##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC	=	rush3.c	\
		lib.c	\
		print_r.c

OBJ	=	$(SRC:.c=.o)

NAME	=	rush3

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
