/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** set pipe
*/

#include "include/include.h"

match_t set_pipe(match_t match)
{
    int i = match.nbl;
    int y = 1;
    int x = 0;

    while (i >= 1) {
        while (y < ((match.nbl * 2) - x)) {
            match.board[i][y] = '|';
            y = y + 1;
        }
        y = 2 + x;
        i = i - 1;
        x = x + 1;
    }
    return (match);
}