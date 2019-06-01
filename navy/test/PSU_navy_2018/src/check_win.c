/*
** EPITECH PROJECT, 2019
** navy
** File description:
** check win
*/

#include "navy.h"
#include "my.h"
#include "print.h"
#include "get_next_line.h"

int check_x(char c, int v)
{
    if (c == 'x')
        v++;
    return (v);
}

int check_map(char **map)
{
    int i = 2;
    int c = 2;
    int v = 0;

    while (map[i] != NULL) {
        c = 2;
        while (map[i][c] != '\0') {
            v = check_x(map[i][c], v);
            c++;
        }
        i++;
    }
    if (v != 14)
        return (0);
    else
        return (1);
}
