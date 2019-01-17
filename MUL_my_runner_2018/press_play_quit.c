/*
** EPITECH PROJECT, 2018
** MUL_my_hunter_2018
** File description:
** menu changement press play or quit
*/

#include "include/include.h"

run_t press_play2(run_t run)
{
    if (run.mcoord.y >= 370 && run.mcoord.y <= 430)
        run.board = 1;
    return (run);
}

run_t press_play(run_t run)
{
    if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        if (run.mcoord.x >= 850 && run.mcoord.x <= 1066)
            run = press_play2(run);
    }
    return (run);
}

run_t press_quit2(run_t run)
{
    if (run.mcoord.y >= 495 && run.mcoord.y <= 560)
        sfRenderWindow_close(run.wdw);
    return (run);
}

run_t press_quit(run_t run)
{
    if (sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        if (run.mcoord.x >= 850 && run.mcoord.x <= 1030)
            run = press_quit2(run);
    }
    return (run);
}