/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** change color text
*/

#include "include/include.h"

run_t change_color_text1(run_t run)
{
    if (run.mcoord.x >= 850 && run.mcoord.x <= 1066) {
        if (run.mcoord.y >= 370 && run.mcoord.y <= 430)
            sfText_setColor(run.text1, sfBlack);
        else
            sfText_setColor(run.text1, sfWhite);
    }
    else
        sfText_setColor(run.text1, sfWhite);
    return (run);
}

run_t change_color_text2(run_t run)
{
    if (run.mcoord.x >= 850 && run.mcoord.x <= 1030) {
        if (run.mcoord.y >= 495 && run.mcoord.y <= 560)
            sfText_setColor(run.text2, sfBlack);
        else
            sfText_setColor(run.text2, sfWhite);
    }
    else
        sfText_setColor(run.text2, sfWhite);
    return (run);
}