/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018
** File description:
** fonction qui convertie une base en une autre base
*/

#include "../include/include.h"

int my_putnbr_base(int nbr, char *const base)
{
    int i = 0;
    int size = my_strlen(base);
    char *res = malloc(sizeof(char) * size);

    if (nbr == 0) {
        my_putchar('0');
    }
    while (nbr != 0) {
        res[i] = base[nbr % size];
        nbr = nbr / size;
        i = i + 1;
    }
    my_putstr(my_revstr(res));
    free(res);
    return (0);
}
