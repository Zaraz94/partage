/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** putstr
*/

#include <unistd.h>
#include "my.h"

void my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
}

int my_putstr_ss(char const *str, int i)
{
    if (str[i] < 32 || str[i] >= 127){
        if (str[i] < 8) {
            my_putstr("\\00");
            put_base(str[i], "01234567");
        }
        else {
            my_putchar('\\');
            my_putchar('0');
            put_base(str[i], "01234567");
        }
        i++;
    }
    return (i);
}

int my_putstr_s(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i = my_putstr_ss(str, i);
        my_putchar(str[i]);
        i++;
    }
    return (0);
}
