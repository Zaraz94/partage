/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** start game loop
*/

#include "include/include.h"

int start_game(run_t run)
{
    run = ini_game(run);
    while (sfRenderWindow_isOpen(run.wdw)) {
        sfRenderWindow_display(run.wdw);
        run.mcoord = sfMouse_getPositionRenderWindow(run.wdw);
        sfSprite_setTextureRect(run.backg, run.brect);
        run = move_background(run);
        run = menu(run);
        run = game(run);
        run = game_over(run);
        run = close_window(run);
    }
    sfMusic_destroy(run.musiq);
    return (0);
}