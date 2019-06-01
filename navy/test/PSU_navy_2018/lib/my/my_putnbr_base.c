/*
** EPITECH PROJECT, 2018
** my putnbr base
** File description:
** main
*/

#include "my.h"
#include <stdio.h>

void put_base(int nb, char *bases)
{
    int base = my_strlen(bases);

    if (nb >= base) {
        put_base((nb / base), bases);
        my_putchar(bases[nb % base]);
    } else {
        my_putchar(bases[nb % base]);
    }
}

void put_baselong(long i, char *bases)
{
    unsigned long base = my_strlen(bases);
    unsigned long nb = i;

    if (i < 0) {
        i = i * (-1) - 1;
        bases = my_revstr(bases);
    }
    if (nb >= base) {
        put_baselong((nb / base), bases);
        my_putchar(bases[(nb % base)]);
    } else {
        my_putchar(bases[(nb % base)]);
    }
}
