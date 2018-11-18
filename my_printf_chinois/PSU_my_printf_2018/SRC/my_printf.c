/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** start fonction
*/

#include "../include/include.h"

void process_fonction(char *str, int *i, va_list ap)
{
    print_char(str, &i, ap);
    print_nbr(str, &i, ap);
    print_str(str, &i, ap);
    print_octal_int(str, &i, ap);
    print_unsigned_int(str, &i, ap);
    print_hexa(str, &i, ap);
    print_hexa_maj(str, &i, ap);
    print_adress(str, &i, ap);
    special_case(str, &i);
}

void my_printf(char *str, ...)
{
    va_list ap;
    int i = 0;

    va_start(ap, str);
    while (str[i] != '\0') {
        if (str[i] != '%')
            my_putchar(str[i]);
        process_fonction(str, &i, ap);
        i = i + 1;
    }
    va_end(ap);
}