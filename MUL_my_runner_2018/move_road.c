/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** move road
*/

#include "include/include.h"

run_t move_road(run_t run)
{
    sfVector2f offset = {-1, 0};
    sfVector2f position = {0, 900};
    sfVector2f position0 = {-60, 900};

    position = sfSprite_getPosition(run.road);
    sfSprite_move(run.road, offset);
    if (position.x <= -1920) {
        sfSprite_setPosition(run.road, position0);
    }
    sfRenderWindow_drawSprite(run.wdw, run.road, NULL);
}