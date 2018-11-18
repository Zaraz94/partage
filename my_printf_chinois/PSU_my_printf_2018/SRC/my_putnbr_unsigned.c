/*
** EPITECH PROJECT, 2018
** my_put_nbr_insigned_int
** File description:
** for unsigned int
*/

#include "../include/include.h"

int my_putnbr_unsigned(unsigned int nb)
{
    if (nb > 9) {
        my_putnbr(nb / 10);
        my_putchar(nb % 10 + '0');
    }
    else if (nb <= 9)
       my_putchar('0' + nb);
    return(nb);
}