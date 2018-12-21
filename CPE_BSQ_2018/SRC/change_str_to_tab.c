/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** chage str to tab
*/

#include "../include/include.h"

void change_str_to_tab(char *str)
{
    int nb_line = find_how_much_line(str);
    int nb_colum = find_how_much_colum(str);
    int **tab = malloc(sizeof(int *) * nb_line + 1);
    int i = 0;
    int j = 0;

    while (i < nb_line) {
        tab[i] = malloc(sizeof(int) * nb_colum + 1);
        while (j < nb_colum) {
            tab[i][j] = str[i * (nb_colum + 1) + j];
            change_0_1(tab, i, j);
            algo(tab, i, j);
            j = j + 1;
        }
        tab[i][j] = '\0';
        i = i + 1;
        j = 0;
    }
    tab[i] = '\0';
    find_max_square(tab, nb_line, nb_colum);
}