/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** game
*/

#include "include/include.h"

run_t game(run_t run)
{
	if (run.board == 1) {
        run = move_road(run);
        run = manip_chara(run);
        run = jump_chara(run);
        run = manip_enemie(run);
        run = mv_enemie(run);
        run = check_colision(run);
	}
	return (run);
}