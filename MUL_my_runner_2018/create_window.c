/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** create window
*/

#include "include/include.h"

run_t create_window(run_t run)
{
    sfVideoMode mode = {1920, 1080, 32};

    run.wdw = sfRenderWindow_create(mode, "RUNNER"  \
        , sfResize | sfClose, NULL);
    return (run);
}