/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** delete first line
*/

#include "../include/include.h"

char *delete_first_line(char *str)
{
    int i = 0;
    int j = 0;
    char *res;

    while (str[i] != '\n')
        i = i + 1;
    i = i + 1;
    res = malloc(sizeof(char) * my_strlen(str) - i + 1);
    while (str[i] != '\0') {
        res[j] = str[i];
        i = i + 1;
        j = j + 1;
    }
    res[j] = '\0';
    return (res);
}