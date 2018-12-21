/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** print tab
*/

#include "../include/include.h"

void print_square(int **tab, int nb_line, int nb_colum)
{
    int i = 0;
    int j = 0;

    while (i < nb_line) {
        while (j < nb_colum) {
            my_putchar(tab[i][j]);
            j++;
        }
        my_putchar('\n');
        j = 0;
        i++;
    }
}