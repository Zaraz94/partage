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

void env_win(player_t player)
{
    my_printf("I won\n\n");
    kill(player.pid, SIGUSR2);
    usleep(500);
    kill(player.pid, SIGUSR2);
    usleep(500);
    kill(player.pid, SIGUSR2);
}

void env_cont(player_t player)
{
    kill(player.pid, SIGUSR2);
}

int game_status(player_t *player)
{
    int i = check_map(player->my_map);

    usleep(100000);
    if (i == 1) {
        my_printf("Enemy won\n\n");
        kill(player->pid, SIGUSR2);
        usleep(500);
        kill(player->pid, SIGUSR2);
        return (-1);
    } else {
        if (check_map(player->other_map) == 1) {
            env_win(*player);
            return (1);
        }
        else
            env_cont(*player);
    }
    return (0);
}

int attack_turn(player_t *player)
{
    if (attack(player) == 84)
        return (84);
    else
        print_maps(*player);
    return (game_status(player));
}

int game_two(player_t *player)
{
    int i = 0;

    while (i == 0) {
        receive(player);
        i = game_status(player);
        if (i == 0)
            i = attack_turn(player);
    }
    if (i == -1)
        return (1);
    else if (i == 84)
        return (84);
    else
        return (0);
}
