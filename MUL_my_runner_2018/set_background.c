/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** set background sprite
*/

#include "include/include.h"

run_t set_background(run_t run)
{
    sfTexture *texture;

    texture = sfTexture_createFromFile("backcity.png", NULL);
    run.backg = sfSprite_create();
    sfSprite_setTexture(run.backg, texture, sfTrue);
    return (run);
}