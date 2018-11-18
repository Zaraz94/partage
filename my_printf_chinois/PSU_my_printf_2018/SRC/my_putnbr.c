/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
** affiche un entier
*/

#include "../include/include.h"

int my_putnbr(int nb)
{
    int modulo = 0;

    if (nb > 0 && nb < 10) {
        my_putchar(nb + '0');
    }
    if (nb > 10) {
        modulo = nb % 10;
        my_putnbr(nb / 10 );
        my_putchar(modulo + '0');
    }
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
        my_putnbr(nb);
    }
    if (nb == 0) {
        my_putchar('0');
    }
    return (0);
}
