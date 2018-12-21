/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** ajout du carre dans le double tableau
*/

#include "../include/include.h"

void add_square(int **tab, int nb_line, int nb_colum, pos_t pos_sq)
{
    int i2 = pos_sq.posi;
    int j2 = pos_sq.posj;
    int k = 0;
    int l = 0;

    change_to_0_1_part2(tab, nb_line, nb_colum);
    tab[i2][j2] = 120;
    while (k < pos_sq.square) {
        while (l < pos_sq.square) {
            tab[i2][j2] = 120;
            j2 = j2 - 1;
            l = l + 1;
        }
        j2 = pos_sq.posj;
        i2 = i2 - 1;
        l = 0;
        k = k + 1;
    }
}