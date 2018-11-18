/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** my_printf special case
*/

#include "../include/include.h"

void special_case(char *str, int **i)
{
    if (str[**i] == '%' && str[**i + 1] == '%') {
        my_putchar('%');
        **i = **i + 1;
    }
}