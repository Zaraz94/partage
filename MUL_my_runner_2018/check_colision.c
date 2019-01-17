/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** check colision
*/

#include "include/include.h"

run_t check_colision(run_t run)
{
    sfVector2f pose = sfSprite_getPosition(run.enemie);
    sfVector2f posc = sfSprite_getPosition(run.chara);

    if ((posc.x + 70) >= (pose.x - 48) && (posc.y + 45) >= pose.y - 80) {
        run.board = 3;
    }
    return (run);
} 