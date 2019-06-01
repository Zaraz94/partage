/*
** EPITECH PROJECT, 2017
** my_strcpy.c
** File description:
** dj
*/

#include "my.h"
#include <stdio.h>

char *my_strcpy(char *array2, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        array2[i] = src[i];
        i = i + 1;
    }
    array2[i] = '\0';
    return (array2);
}
