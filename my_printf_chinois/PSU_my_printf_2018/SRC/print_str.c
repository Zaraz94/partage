/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** my_printf_str
*/

#include "../include/include.h"

void print_str(char *str , int **i, va_list ap)
{
    char *res;

    if (str[**i] == '%' && str[**i + 1] == 's') {
        res = va_arg(ap, char *);
        my_putstr(res);
        **i = **i + 1;
    }
}