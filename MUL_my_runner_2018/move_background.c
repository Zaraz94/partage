/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** move background
*/

#include "include/include.h"

run_t move_background(run_t run)
{
    sfVector2f offset = {-0.3, 0};
    sfVector2f position = {0, 0};
    sfVector2f position0 = {0, 0};

    sfSprite_move(run.backg, offset);
    position = sfSprite_getPosition(run.backg);
    if (position.x < -1920) {
        sfSprite_setPosition(run.backg, position0);
    }
    sfRenderWindow_drawSprite(run.wdw, run.backg, NULL);
    return (run);
}