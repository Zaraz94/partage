/*
** EPITECH PROJECT, 2019
** NAVY PROJECT
** File description:
** malloc a tab
*/

#include "print.h"

int check_touch(char **array, int line, int col)
{
    if (array[line + 1][col * 2] != '.')
        return (1);
    else
        return (2);
}
