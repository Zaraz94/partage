/*
** EPITECH PROJECT, 2018
** lib
** File description:
** lib
*/


#include "my.h"
#include <stdlib.h>

char *my_revstr(char *str)
{
    int a = 0;
    int z = my_strlen(str) - 1;
    char *rev = malloc(sizeof(char *) * (z + 1));

    while (z >= 0) {
        rev[a] = str[z];
        a++;
        z--;
    }
    return (rev);
}
