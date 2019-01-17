/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** process fonction
*/

#include "include/include.h"

void process(int ac, char **av)
{
    match_t match;

    error(ac, av);
    match = ini_game(match, av);
    match = create_board(match);
    match = set_pipe(match);
    display_board(match);
    match.stop = nbr_pipe(match);
    while (match.stop != 0) {
        match.stop = game(&match);
    }
    return (0);
}