##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

NAME	=	libmy.a

SRC	=	concat_params.c	\
		my_get_nbr.c	\
		my_putchar.c	\
		my_putnbr_base.c	\
		my_put_nbr.c	\
		my_putstr.c	\
		my_revstr.c	\
		my_show_word_array.c	\
		my_strcat.c	\
		my_strcpy.c	\
		my_strcmp.c	\
		my_strdup.c	\
		my_strlen.c	\
		nbr_to_str.c	\
		sort_tab.c	\
		get_next_line.c	\
		my_printf.c

OBJ	=	$(SRC:.c=.o)

ARRC	=	ar rc

RM	=	rm -f

CFLAGS    =       -I ./../../include/ -Wall -Werror -Wextra

all:	$(NAME)

$(NAME):	$(OBJ)
	$(ARRC) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
