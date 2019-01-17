/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** my str copy bis
*/

#include "include/include.h"

char *my_strcpybis(char *src, int g)
{
    char *dest = malloc(sizeof(char) * g);
    int i = 0;

    while (i < g) {
        dest[i] = src[i];
        i = i + 1;
    }
    dest[i - 1] = '\0';
    return (dest);
}