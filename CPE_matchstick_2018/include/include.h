/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** include
*/

#ifndef INCLUDE_H
#define INCLUDE_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

typedef struct IA_s ia_t;
struct IA_s {
	int finish;
	int gnbr;
	int nbrpipe;
	int diff;
	int turn;
	int nbp;
};

typedef struct match_s match_t;
struct match_s {
	char **board;
	char *nb2;
	int stop;
	int nbl;
	int nbl2;
	int size;
	int size2;
	int line;
	int matches;
	int nbr_matches_total;
	char *buff;
	char *buffer;
	char *str_l;
	char *str_m;
};

void my_putchar(char c);
void my_putstr(char const *str);
int my_put_nbr(int nb);
void process(int ac, char **av);
int error(int ac, char **av);
void error1(int line, int nbl);
void error2(int matches, int nbl2, char *nb2);
int my_atoi(char *str);
match_t ini_game(match_t match, char **av);
match_t create_board(match_t match);
void display_board(match_t match);
match_t set_pipe(match_t match);
int nbr_pipe(match_t match);
match_t set_board(match_t match, int i, int y);
void get_line(match_t *match);
void get_matches(match_t *match);
int game(match_t *match);
char *my_strcpybis(char *src, int g);
int my_strlenpipe(char *str);
void change_pipe_to_space(match_t *match, int line, int nbl, int matches);
int generator(int max);
int process_ia(match_t *match);
void process_player(match_t *match);
void ia(match_t *match);
void ia_part2(match_t *match, ia_t *IA);
void ia_part3(match_t *match, ia_t *IA);
void ia_part4(match_t *match, ia_t *IA);

#endif