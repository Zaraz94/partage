/*
** EPITECH PROJECT, 2018
** my_atoi
** File description:
**
*/

#include "include/include.h"

int my_atoi(char *str)
{
    int y = 0;
    int nb = 0;

    while (str[y] != '\0') {
        if (str[y] >= 48 && str[y] <= 57) {
            nb = nb * 10 + (str[y] - 48);
            y = y + 1;
        }
    }
    return (nb);
}
