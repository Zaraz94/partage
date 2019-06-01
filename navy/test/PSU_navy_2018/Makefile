##
## EPITECH PROJECT, 2018
## do op
## File description:
## make file
##

NAME    =       navy

SRC     =	src/main.c	\
		src/player_one_begin.c	\
		src/player_two_begin.c	\
		src/make_array.c	\
		src/print_maps.c	\
		src/add_ship.c		\
		src/attack.c	\
		src/receive.c	\
		src/check_map.c	\
		src/player_one_game.c	\
		src/player_two_game.c	\
		src/check_pos.c		\
		src/check_ship.c	\
		src/check_win.c

OBJ     =       $(SRC:.c=.o)

CC      =       gcc

RM      =       rm -f

LIB     =       -L./lib/my -lmy

CFLAGS    =       -g3 -I ./include/  -Wall  -Wextra

all:    $(NAME)

$(NAME):        $(OBJ)
	make -C lib/my
	$(CC) -o $(NAME) $(OBJ) $(LIB)

clean:
	make clean -C lib/my
	$(RM) $(OBJ)

fclean: clean
	make fclean -C lib/my
	$(RM) $(NAME)

re: fclean all

.PHONY: all re clean fclean
