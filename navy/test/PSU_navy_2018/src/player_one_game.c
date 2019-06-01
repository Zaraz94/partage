/*
** EPITECH PROJECT, 2019
** navy
** File description:
** game
*/

#include "navy.h"
#include "my.h"
#include "print.h"
#include "get_next_line.h"

int game_status_one(void)
{
    int env = -1;
    int i = -1;
    struct sigaction act;
    act.sa_sigaction = &handler2;
    while (i != 0) {
        sigaction(10, &act, NULL);
        env++;
        if (env == 0)
            pause();
        else {
            i = usleep(1000);
        }
    }
    if (env == 2) {
        my_printf("I won\n\n");
        return (1);
    } else if (env == 3) {
        my_printf("Enemy won\n\n");
        return (-1);
    } else
        return (0);
}

int game_one(player_t *player)
{
    int i = 0;

    while (i == 0) {
        i = attack(player);
        if (i != 84)
            i = game_status_one();
        if (i == 0) {
            receive(player);
            print_maps(*player);
            i = game_status_one();
        }
    }
    return (i);
}
