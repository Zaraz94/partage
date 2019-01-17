/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** set music
*/

#include "include/include.h"

run_t set_music(run_t run)
{
	run.musiq = sfMusic_createFromFile("Crusaders-Approaching.ogg");
	sfMusic_setLoop(run.musiq, sfTrue);
	sfMusic_play(run.musiq);
	return (run);
}