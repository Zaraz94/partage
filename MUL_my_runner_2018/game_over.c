/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** if game over
*/

#include "include/include.h"

run_t game_over(run_t run)
{
	if (run.board == 3) {
		sfRenderWindow_drawSprite(run.wdw, run.gameo, NULL);
	}
	return (run);
}