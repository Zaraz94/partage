/*
** EPITECH PROJECT, 2019
** test
** File description:
** my_strcmp
*/

#include "my.h"

int my_strcnmp(char *str, char *str2, int n)
{
    int i = 0;

    if (my_strlen(str) != my_strlen(str2))
        return (-1);
    while (str[i] != '\0' && i <= n) {
        if (str[i] != str2[i])
            return (-1);
        i++;
    }
    return (1);
}

int my_strcmp(char *str, char *str2)
{
    int i = 0;

    if (my_strlen(str) != my_strlen(str2))
        return (-1);
    while (str[i] != '\0') {
        if (str[i] != str2[i])
            return (-1);
        i++;
    }
    return (1);
}
