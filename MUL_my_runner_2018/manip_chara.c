/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** character manipulation
*/

#include "include/include.h"

run_t manip_chara(run_t run)
{
    sfSprite_setTextureRect(run.chara, run.crect);
    sfRenderWindow_drawSprite(run.wdw, run.chara, NULL);
    run.time = sfClock_getElapsedTime(run.clock);
    run.microsec = run.time.microseconds / 1000000.0;
    if (run.microsec >= 0.15) {
        run.crect.left = run.crect.left + 256;
        if (run.crect.left > 1500)
            run.crect.left = 0;
        sfClock_restart(run.clock);
    }
    return (run);
}