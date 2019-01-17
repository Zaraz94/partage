/*
** EPITECH PROJECT, 2018
** my_put_nbr
** File description:
**
*/

#include "include/include.h"

int my_put_nbr(int nb)
{
    int modulo = 0;

    if (nb > 0 && nb < 10) {
        my_putchar( nb + '0');
    }
    if (nb > 10) {
        modulo = nb % 10;
        my_put_nbr( nb / 10 );
        my_putchar( modulo + '0');
    }
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
        my_put_nbr(nb);
    }
    if (nb == 0) {
        my_putchar('0');
    }
    return (0);
}
