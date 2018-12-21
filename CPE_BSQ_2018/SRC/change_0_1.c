/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** change . to 1 & o to 0
*/

#include "../include/include.h"

void change_0_1(int **tab, int i, int j)
{
    if (tab[i][j] == '.')
        tab[i][j] = 1;
    if (tab[i][j] == 'o')
        tab[i][j] = 0;
}