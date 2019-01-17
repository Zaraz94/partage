##
## EPITECH PROJECT, 2018
## PSU_printf_2017
## File description:
## Makefile
##

CC	=	gcc

SRC	=	main.c 				\
		start_game.c 		\
		create_window.c 	\
		set_background.c 	\
		close_window.c 		\
		move_background.c 	\
		set_road.c 			\
		move_road.c 		\
		set_character.c 	\
		manip_chara.c 		\
		jump_chara.c 		\
		set_enemie.c 		\
		mv_enemie.c 		\
		manip_enemie.c 		\
		check_colision.c 	\
		set_menu.c 			\
		menu.c 				\
		game.c 				\
		change_color_text.c \
		press_play_quit.c 	\
		set_music.c 		\
		set_game_over.c 	\
		game_over.c 		\
		ini_game.c

OBJ	=	$(SRC:.c=.o)

NAME	=	my_runner

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -Wall -Wextra -W -l c_graph_prog -I/include -o $(NAME) -g3

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
