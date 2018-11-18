/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** my_printf_nbr
*/

#include "../include/include.h"

void print_nbr(char *str, int **i, va_list ap)
{
    int result = 0;

    if (str[**i] == '%' && (str[**i + 1] == 'i' || str[**i + 1] == 'd')) {
        result = va_arg(ap, int);
        my_putnbr(result);
        **i = **i + 1;
    }
}