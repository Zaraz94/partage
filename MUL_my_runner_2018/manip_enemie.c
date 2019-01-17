/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** enemie manipulation
*/

#include "include/include.h"

run_t manip_enemie(run_t run)
{
    sfSprite_setTextureRect(run.enemie, run.erect);
    sfRenderWindow_drawSprite(run.wdw, run.enemie, NULL);
    run.etime = sfClock_getElapsedTime(run.eclock);
    run.emicrosec = run.etime.microseconds / 1000000.0;
    if (run.emicrosec >= 0.15) {
        run.erect.left = run.erect.left + 48;
        if (run.erect.left >= 144)
            run.erect.left = 0;
        sfClock_restart(run.eclock);
    }
    return (run);
}