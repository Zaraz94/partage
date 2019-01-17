/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** set road sprite
*/

#include "include/include.h"

run_t set_road(run_t run)
{
    sfTexture *texture;
    sfVector2f position0 = {0, 900};

    texture = sfTexture_createFromFile("road.png", NULL);
    run.road = sfSprite_create();
    sfSprite_setTexture(run.road, texture, sfTrue);
    sfSprite_setPosition(run.road, position0);
    return (run);
}