/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** print adress
*/

#include "../include/include.h"

void print_adress(char *str, int **i, va_list ap)
{
    int p = 0;

    if (str[**i] == '%' && str[**i + 1] == 'p') {
        p = va_arg(ap, int);
        my_putstr("0x");
        my_putnbr_base(p, "0123456789abcdef");
        **i = **i + 1;
    }
}