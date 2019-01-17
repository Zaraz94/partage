/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** set game over
*/

#include "include/include.h"

run_t set_game_over(run_t run)
{
	sfTexture *texture;

    texture = sfTexture_createFromFile("sprite_game_over.png", NULL);
    run.gameo = sfSprite_create();
    sfSprite_setTexture(run.gameo, texture, sfTrue);
	return (run);
}