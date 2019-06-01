/*
** EPITECH PROJECT, 2019
** NAVY PROJECT
** File description:
** malloc a tab
*/

#include "my.h"
#include "get_next_line.h"
#include "navy.h"

char **malloc_board(char **array)
{
    int i = 0;
    int fd = open("./maps/my_navy.txt", O_RDONLY);
    char *str;

    array = malloc(sizeof(char *) * 10);
    while (i <= 9) {
        str = get_next_line(fd);
        array[i] = malloc(sizeof(char) * my_strlen(str));
        array[i] = my_strcpy(array[i], str);
        i++;
    }
    array[i] = NULL;
    return (array);
}

void rempl_struc(player_t *player)
{
    player->my_map = malloc_board(player->my_map);
    player->other_map = malloc_board(player->other_map);
}
