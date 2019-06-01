/*
** EPITECH PROJECT, 2018
** my_printf
** File description:
** my_printf
*/

#include "my.h"
#include "printf.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

void next_print(va_list list_printf, char c)
{
    if (c == 'S')
        my_putstr_s(va_arg(list_printf, char *));
    if (c == '%')
        my_putchar('%');
    if (c == 'c')
        my_putchar(va_arg(list_printf, int));
    if (c == 'u' && va_arg(list_printf, int) > 0)
        my_put_nbr(va_arg(list_printf, int));
}

int print(va_list list_printf, char *str, int i)
{
    if (str[i] == 'd' || str[i] == 'i')
        my_put_nbr(va_arg(list_printf, int));
    if (str[i] == 's' )
        my_putstr(va_arg(list_printf, char *));
    if (str[i] == 'X')
        put_base(va_arg(list_printf, int), "0123456789ABCDEF");
    if (str[i] == 'x')
        put_base(va_arg(list_printf, int), "0123456789abcdef");
    if (str[i] == 'b')
        put_base(va_arg(list_printf, int), "01");
    if (str[i] == 'o')
        put_base(va_arg(list_printf, int), "01234567");
    if (str[i] == 'p'){
        my_putstr("0x");
        put_baselong(va_arg(list_printf, long), "0123456789abcdef");
    }
    else
        next_print(list_printf, str[i]);
    return (i);
}

int my_printf(char *str, ...)
{
    int i = 0;
    va_list list_printf;

    va_start(list_printf, str);
    while (str[i] != '\0') {
        if (str[i] == '%') {
            i++;
            print(list_printf, str, i);
        }
        else if (str[i - 1] != '%')
            my_putchar(str[i]);
        else
            my_putchar(str[i]);
        i++;
    }
    va_end(list_printf);
    return (0);
}
