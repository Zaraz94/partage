/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** initialisation for game
*/

#include "include/include.h"

run_t ini_game2(run_t run)
{
    run.mv_i = 0;
    run.clock = sfClock_create();
    run.mv_clock = sfClock_create();
    run.eclock = sfClock_create();
    run = create_window(run);
    run = set_background(run);
    run = set_road(run);
    run = set_character(run);
    run = set_enemie(run);
    run = set_menu(run);
    run = set_music(run);
    run = set_game_over(run);
    run.score = 0;
    return (run);
}

run_t ini_game(run_t run)
{
    run = ini_game2(run);
    run.board = 0;
    run.brect.left = 0;
    run.brect.top = 0;
    run.brect.width = 3840;
    run.brect.height = 1080;
    run.mv_speedb.x = 0.5;
    run.mv_speedb.y = 0;
    run.crect.left = 0;
    run.crect.top = 0;
    run.crect.width = 256;
    run.crect.height = 256;
    run.erect.left = 0;
    run.erect.top = 48;
    run.erect.width = 48;
    run.erect.height = 48;
    run.eoffset.x = -1.5;
    run.eoffset.y = 0.0;
    return (run);
}