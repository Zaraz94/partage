/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** character jump
*/

#include "include/include.h"

run_t jump_chara2(run_t run, sfVector2f position, sfVector2f offset2)
{
    if (position.y >= 500 && position.y <= 800) {
        if (run.mv_microsec >= 0.1)
            sfSprite_move(run.chara, offset2);
        if (run.mv_microsec >= 0.6)
            sfClock_restart(run.mv_clock);
    }
    else
        run.mv_i = 0;
    return (run);
}

run_t jump_chara(run_t run)
{
    sfVector2f offset = {0, -3};
    sfVector2f offset2 = {0, 1.5};
    sfVector2f position = sfSprite_getPosition(run.chara);
    
    run.mv_time = sfClock_getElapsedTime(run.mv_clock);
    run.mv_microsec = run.mv_time.microseconds / 1000000.0;
    if (sfKeyboard_isKeyPressed(sfKeySpace) && position.y >= 600 && run.mv_i != 2)
        run.mv_i = 1;
    if (run.mv_i == 1 && position.y >= 580)
        sfSprite_move(run.chara, offset);
    if (position.y <= 600)
        run.mv_i = 2;
    if (run.mv_i == 2)
        run = jump_chara2(run, position, offset2);
    return (run);
}