/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** print unsigned int
*/

#include "../include/include.h"

void print_octal_int(char *str, int **i, va_list ap)
{
    unsigned int o = 0;

    if (str[**i] == '%' && str[**i + 1] == 'o') {
        o = va_arg(ap, unsigned int);
        my_putnbr_base(o, "01234567");
        **i = **i + 1;
    }
}