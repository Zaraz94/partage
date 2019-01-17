/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** menu
*/

#include "include/include.h"

run_t menu(run_t run)
{
    if (run.board == 0) {
        sfRenderWindow_drawText(run.wdw, run.text1, NULL);
        sfRenderWindow_drawText(run.wdw, run.text2, NULL);
        run = change_color_text1(run);
        run = change_color_text2(run);
        run = press_play(run);
        run = press_quit(run);
    }
    return (run);
}