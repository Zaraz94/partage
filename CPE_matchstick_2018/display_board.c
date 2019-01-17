/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** display board
*/

#include "include/include.h"

void display_board(match_t match)
{
    for (int i = 0; i < match.nbl + 2; i++) {
        my_putstr(match.board[i]);
        my_putchar('\n');
    }
}