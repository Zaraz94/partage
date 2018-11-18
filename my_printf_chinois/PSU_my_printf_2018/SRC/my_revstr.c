/*
** EPITECH PROJECT, 2018
** my_revstr
** File description:
** retourne un str
*/

#include "../include/include.h"

char *my_revstr(char *str)
{
    int i = 0;
    int size = my_strlen(str);
    char c;

    while (i < size / 2) {
        c = *(str + i);
        *(str + i) = *(str + size - i - 1);
        *(str + size - i - 1) = c;
        i = i + 1;
    }
    return (str);
}
