/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** move enemie
*/

#include "include/include.h"

run_t mv_enemie(run_t run)
{
    sfVector2f pos = sfSprite_getPosition(run.enemie);
    sfVector2f pos0 = {3000, 860};
    sfVector2f pos1 = {-1.5, 0.0};

    if (pos.x >= -10)
        sfSprite_move(run.enemie, run.eoffset);
    else {
        sfSprite_setPosition(run.enemie, pos0);
        run.eoffset.x = run.eoffset.x + (-0.18);
        run.score = run.score + 1;
    }
    return (run);
}