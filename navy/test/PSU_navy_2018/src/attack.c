/*
** EPITECH PROJECT, 2019
** navy
** File description:
** attack
*/

#include "navy.h"
#include "my.h"
#include "print.h"
#include "get_next_line.h"
#include <time.h>

void env_att_end(player_t *player, int c, char *str)
{
    if (c == 2) {
        my_printf("%s: missed\n\n", str);
        player->other_map[str[1] - 47][(str[0] - 64) * 2] = 'o';
    } else {
        my_printf("%s: hit\n\n", str);
        player->other_map[str[1] - 47][(str[0] - 64) * 2] = 'x';
    }
}

void env_att_next(char *str, player_t *player)
{
    int c = -1;
    int i = -1;
    struct sigaction act;

    act.sa_sigaction = &handler2;
    while (i != 0) {
        sigaction(12, &act, NULL);
        c++;
        if (c == 0)
            pause();
        else {
            i = usleep(1000);
        }
    }
    env_att_end(player, c, str);
}

void env_att(char *str, player_t *player)
{
    int a = (str[0] - 64) * 10 + str[1] - 48;
    int b = 0;

    while (b != a) {
        kill(player->pid, SIGUSR1);
        usleep(500);
        b++;
    }
    env_att_next(str, player);
}

int check_position(char *str, player_t *player)
{
    if (my_strlen(str) != 2) {
        my_printf("wrong position\n");
        return (0);
    }
    if (str[0] < 'A' || str[0] > 'H') {
        my_printf("wrong position\n");
        return (0);
    }
    if (str[1] < '1' || str[1] > '8') {
        my_printf("wrong position\n");
        return (0);
    }
    if (player->other_map[str[1] - 47][(str[0] - 64)  * 2] != '.') {
        my_printf("wrong position\n");
        return (0);
    }
    return (1);
}

int attack(player_t *player)
{
    char *str;
    int i = 0;

    while (i == 0) {
        my_printf("attack: ");
        str = get_next_line(0);
        if (str == NULL)
            return (84);
        else
            i = check_position(str, player);
    }
    env_att(str, player);
}