/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** print hexa
*/

#include "../include/include.h"

void print_hexa(char *str, int **i, va_list ap)
{
    int x = 0;

    if (str[**i] == '%' && str[**i + 1] == 'x') {
        x = va_arg(ap, int);
        my_putnbr_base(x, "0123456789abcdef");
        **i = **i + 1;
    }
}