/*
** EPITECH PROJECT, 2018
** days 8
** File description:
** task 01
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(char const *str)
{
    int i = my_strlen(str) + 1;
    char *dup = malloc(sizeof(char) * i);

    if (dup == 0)
        return (0);
    dup = my_strcpy(dup, str);
    dup[i - 1] = '\0';
    return (dup);
}
