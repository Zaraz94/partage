/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** print hexa maj
*/

#include "../include/include.h"

void print_hexa_maj(char *str, int **i, va_list ap)
{
    int x = 0;

    if (str[**i] == '%' && str[**i + 1] == 'X') {
        x = va_arg(ap, int);
        my_putnbr_base(x, "0123456789ABCDEF");
        **i = **i + 1;
    }
}