/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** find how much line & colum
*/

#include "../include/include.h"

int find_how_much_line(char *str)
{
    int i = 0;
    int res = 0;

    while (str[i] != '\0') {
        if (str[i] == '\n')
            res = res + 1;
        i = i + 1;
    }
    return (res);
}

int find_how_much_colum(char *str)
{
    int i = 0;

    while (str[i] != '\n')
        i = i + 1;
    return (i);
}