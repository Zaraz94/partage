/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** print unsigned int
*/

#include "../include/include.h"

void print_unsigned_int(char *str, int **i, va_list ap)
{
    unsigned int u = 0;

    if (str[**i] == '%' && str[**i + 1] == 'u') {
        u = va_arg(ap, unsigned int);
        my_putnbr_unsigned(u);
        **i = **i + 1;
    }
}