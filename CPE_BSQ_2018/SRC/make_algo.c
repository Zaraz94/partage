/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** main
*/

#include "../include/include.h"

int add_plus1(int **tab, int i, int j)
{
    int a = tab[i][j - 1];
    int b = tab[i - 1][j - 1];
    int c = tab[i - 1][j];
    int digit = a;

    if (digit > b)
        digit = b;
    if (digit > c)
        digit = c;
    if (a == 0 || b == 0 || c == 0)
        digit = 0;
    return (digit + 1);
}

void algo(int **tab, int i, int j)
{
    if (i > 0 && j > 0) {
        if (tab[i][j] > 0 && tab[i][j] <= 9) {
            tab[i][j] = add_plus1(tab, i, j);
        }
    }
}