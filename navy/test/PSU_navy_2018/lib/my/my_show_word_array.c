/*
** EPITECH PROJECT, 2018
** day 06
** File description:
** task 03
*/

#include "my.h"

void my_show_int_array(int **tab, int nb)
{
    int i = 0;
    int z = 0;

    while (tab[i] != 0) {
        z = 0;
        while (z != nb) {
            my_put_nbr(tab[i][z]);
            z++;
        }
        my_putchar('\n');
        i++;
    }
}

void my_show_word_array(char * const * tab)
{
    int i = 0;

    while (tab[i] != 0) {
        my_putstr(tab[i]);
        my_putchar('\n');
        i++;
    }
}
