##
## EPITECH PROJECT, 2018
## makefile
## File description:
## simple makefile
##

CC	=	gcc -Wall -Wextra -W

SRC	=	main.c 					\
		my_put_nbr.c 			\
		error.c 				\
		process.c 				\
		ini_game.c 				\
		set_board.c 			\
		my_atoi.c 				\
		my_putchar.c 			\
		my_putstr.c 			\
		display_board.c 		\
		set_pipe.c 				\
		nbr_pipe.c 				\
		get_line.c 				\
		get_matches.c 			\
		game.c 					\
		my_strcpybis.c 			\
		my_strlenpipe.c 		\
		change_pipe_to_space.c 	\
		generator.c 			\
		process_player.c 		\
		process_ia.c 			\
		ia.c 					\
		create_board.c

OBJ	=	$(SRC:.c=.o)

NAME	=	matchstick

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re