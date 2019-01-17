/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** close window
*/

#include "include/include.h"

run_t close_window(run_t run)
{
    while (sfRenderWindow_pollEvent(run.wdw, &run.event)) {
        if (run.event.type == sfEvtClosed)
            sfRenderWindow_close(run.wdw);
    }
    return (run);
}