/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** main
*/

#include "../include/include.h"

void find_max_square(int **tab, int nb_line, int nb_colum)
{
    int *pos = malloc(sizeof(int) * 3);
    int max_nbr = 0;
    pos_t pos_sq;

    for (int i = 0; i < nb_line; i++) {
        for (int j = 0; j < nb_colum; j++) {
            if (max_nbr < tab[i][j]) {
                max_nbr = tab[i][j];
                pos[0] = i;
                pos[1] = j;
            }
        }
    }
    pos_sq.square = tab[pos[0]][pos[1]];
    pos_sq.posi = pos[0];
    pos_sq.posj = pos[1];
    add_square(tab, nb_line, nb_colum, pos_sq);
    print_square(tab, nb_line, nb_colum);
}