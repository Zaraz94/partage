/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** my_printf special case
*/

#include "../include/include.h"

void print_char(char *str, int **i, va_list ap)
{
    char c;

    if (str[**i] == '%' && str[**i + 1] == 'c') {
        c = va_arg(ap, int);
        my_putchar(c);
        **i = **i + 1;
    }
}