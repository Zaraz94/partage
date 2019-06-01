/*
** EPITECH PROJECT, 2019
** NAVY PROJECT
** File description:
** malloc a tab
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "my.h"
#include "get_next_line.h"
#include "navy.h"

int check_pos_ship2(char *str)
{
    if (str[6] <= '8' && str[6] >= '1')
        return (0);
    else
        return (84);
    if ((str[2] <= 'H' && str[2] >= 'A') && (str[5] <= 'H' && str[5] >= 'A'))
        return (0);
    else
        return (84);
}

int check_pos_ship(char *str)
{
    if (my_strlen(str) != 7)
        return (84);
    if ((str[0] <= '8' && str[0] >= '1') && (str[3] <= '8' && str[3] >= '1'))
        return (check_pos_ship2(str));
    else
        return (84);
    if (str[1] == ':' && str[4] == ':')
        return (check_pos_ship2(str));
    else
        return (84);
    return (check_pos_ship2(str));
}

int check_str(char *str)
{
    if (check_pos_ship(str) == 84)
        return (84);
    else
        return (0);
}

int check_pos(char *str)
{
    if (check_str(str) == 84)
        return (84);
    else if (check_ship2(str) == 84)
        return (84);
    return (0);
}

int check_all(char *str)
{
    int fd = open(str, O_RDONLY);

    if (fd == -1)
        return (84);
    while (str != NULL) {
        str = get_next_line(fd);
        if (str != NULL && check_pos(str) == 84) {
            return (84);
        }
    }
    return (0);
}
