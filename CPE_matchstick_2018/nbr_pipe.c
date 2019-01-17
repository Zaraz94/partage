/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** process fonction
*/

#include "include/include.h"

int nbr_pipe(match_t match)
{
    int nbrpipe = 0;
    int nbr_pipe = 0;

    for (int i = 0; i < (match.nbl + 2); i++) {
        nbrpipe = my_strlenpipe(match.board[i]);
        nbr_pipe = nbr_pipe + nbrpipe;
    }
    return (nbr_pipe);
}