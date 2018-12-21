/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** change les nbr en o et .
*/

#include "../include/include.h"

void change_to_0_1_part2(int **tab, int nb_line, int nb_colum)
{
    int i = 0;
    int j = 0;

    while (i < nb_line) {
        while (j < nb_colum) {
            change_to_0_1(tab, i, j);
            j++;
        }
        j = 0;
        i++;
    }
}

void change_to_0_1(int **tab, int i, int j)
{
    if (tab[i][j] == 0)
        tab[i][j] = 111;
    else
        tab[i][j] = 46;
}