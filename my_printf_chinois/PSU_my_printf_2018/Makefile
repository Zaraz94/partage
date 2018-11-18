##
## EPITECH PROJECT, 2018
## makefile
## File description:
## simple makefile
##

SRC	=	SRC/my_printf.c \
		SRC/print_nbr.c \
		SRC/my_putnbr.c \
		SRC/my_putchar.c \
		SRC/print_str.c \
		SRC/my_putstr.c \
		SRC/special_case.c 	\
		SRC/print_char.c \
		SRC/print_unsigned_int.c 	\
		SRC/print_octal_int.c 	\
		SRC/my_putnbr_base.c 	\
		SRC/my_strlen.c \
		SRC/my_revstr.c \
		SRC/my_putnbr_unsigned.c 	\
		SRC/print_hexa.c \
		SRC/print_hexa_maj.c 	\
		SRC/print_adress.c 	\
		SRC/case_n.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re