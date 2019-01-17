/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** set enemie
*/

#include "include/include.h"

run_t set_enemie(run_t run)
{
    sfTexture *texture;
    sfVector2f scale = {2, 2};
    sfVector2f position = {1820, 860};

    texture = sfTexture_createFromFile("sprite_enemie2.png", NULL);
    run.enemie = sfSprite_create();
    sfSprite_setTexture(run.enemie, texture, sfTrue);
    sfSprite_setPosition(run.enemie, position);
    sfSprite_scale(run.enemie, scale);
    return (run);
}