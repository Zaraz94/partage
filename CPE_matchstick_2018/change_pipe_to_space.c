/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** change pipe to space fonction
*/

#include "include/include.h"

void change_pipe_to_space(match_t *match, int line, int nbl, int matches)
{
    int j = matches;

    for (int i = ((nbl * 2) - 1); i > 0; i = i - 1) {
        if (match->board[line][i] == '|' && j > 0) {
            match->board[line][i] = ' ';
            j = j - 1;
        }
    }
}