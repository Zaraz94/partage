/*
** EPITECH PROJECT, 2019
** navy
** File description:
** add ship to the map
*/

#include "navy.h"
#include "my.h"
#include "print.h"

int add_ship(player_t *player, char *str)
{
    int i = my_getnbr(str);
    int c = 0;

    while (c != i) {
        if (str[3] != str[6] && str[3] < str[6])
            player->my_map[str[3] - 47 + c][(str[2] - 64) * 2] = i + 48;
        if (str[3] != str[6] && str[3] > str[6])
            player->my_map[str[3] - 47 - c][(str[2] - 64) * 2] = i + 48;
        if (str[2] != str[5] && str[2] < str[5])
            player->my_map[str[3] - 47][(str[2] - 64 + c) * 2] = i + 48;
        if (str[2] != str[5] && str[2] > str[5])
            player->my_map[str[3] - 47][(str[2] - 64 - c) * 2] = i + 48;
        c++;
    }
    return (0);
}
