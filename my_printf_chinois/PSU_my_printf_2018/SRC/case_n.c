/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** case of backslach n
*/

#include "../include/include.h"

void case_n(char *str, int **i, va_list ap)
{
    if (str[**i] == '\\' && str[**i + 1] == 'n') {
        my_putchar('\n');
        **i = **i + 2;
    }
}