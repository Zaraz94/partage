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
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef struct pos_s pos_t;
struct pos_s {
    int square;
    int posi;
    int posj;
};

void my_putchar(char c);
int my_strlen(char const *str);
int find_size_map(char *av);
char *cp_map_in_str(char *av);
char *delete_first_line(char *str);
int find_how_much_line(char *str);
int find_how_much_colum(char *str);
void change_str_to_tab(char *str);
void change_0_1(int **tab, int i, int j);
void algo(int **tab, int i, int j);
int add_plus1(int **tab, int i, int j);
void find_max_square(int **tab, int nb_line, int nb_colum);
void change_to_0_1(int **tab, int i, int j);
void add_square(int **tab, int nb_line, int nb_colum, pos_t pos_sq);
void add_square_part2(int **tab, int i, int j, pos_t pos_sq);
void print_square(int **tab, int nb_line, int nb_colum);
void change_to_0_1_part2(int **tab, int nb_line, int nb_colum);

#endif