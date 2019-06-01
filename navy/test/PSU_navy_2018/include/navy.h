/*
** EPITECH PROJECT, 2019
** navy
** File description:
** .h
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <string.h>
#define _GNU_SOURCE

typedef struct player_s
{
    int pid;
    char **my_map;
    char **other_map;
}player_t;

int player_two(char *pid, char *str);

int player_one(char *str);

int attack(player_t *player);

void receive(player_t *player);

void rempl_struc(player_t *player);

void print_maps(player_t player);

int add_ship(player_t *player, char *str);

void create_map(player_t *one, char *str);

int check_touch(char **array, int line, int col);

void handler2(int sig, siginfo_t * siginfo, void *t);

int game_one(player_t *player);

int game_two(player_t *player);

int check_map(char **str);

int check_ship2(char *str);

int check_ship(char *str);

int check_all(char *str);
