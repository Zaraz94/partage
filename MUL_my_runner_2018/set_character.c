/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** set character sprite
*/

#include "include/include.h"

run_t set_character(run_t run)
{
    sfTexture *texture;
    sfVector2f position0 = {50, 780};
    sfVector2f scale = {0.6, 0.6};

    texture = sfTexture_createFromFile("sprite_run.png", NULL);
    run.chara = sfSprite_create();
    sfSprite_setTexture(run.chara, texture, sfTrue);
    sfSprite_setPosition(run.chara, position0);
    sfSprite_scale(run.chara, scale);
    return (run);
}