/*
** EPITECH PROJECT, 2019
** navy
** File description:
** receive
*/

#include "my.h"
#include "print.h"
#include "navy.h"

void handler2(int sig, siginfo_t * siginfo, void *t)
{
}

void receive_next(player_t *player, int col)
{
    int a = col / 10;
    int b = col - (a * 10);
    int c = 0;

    c = check_touch(player->my_map, b, a);
    if (c == 1) {
        player->my_map[b + 1][a * 2] = 'x';
        usleep(500);
        my_printf("%c%d: hit\n\n", a + 64, b, player->pid);
        kill(player->pid, SIGUSR2);
    }
    else {
        player->my_map[b + 1][a * 2] = 'o';
        my_printf("%c%d: missed\n\n", a + 64, b);
        usleep(500);
        kill(player->pid, SIGUSR2);
        usleep(500);
        kill(player->pid, SIGUSR2);
    }
}

void receive(player_t *player)
{
    int col = -1;
    int i = -1;
    struct sigaction act;

    act.sa_sigaction = &handler2;
    my_printf("waiting for enemy's attack...\n");
    while (i != 0) {
        sigaction(10, &act, NULL);
        col++;
        if (col == 0)
            pause();
        else {
            i = usleep(1000);
        }
    }
    receive_next(player, col);
}
