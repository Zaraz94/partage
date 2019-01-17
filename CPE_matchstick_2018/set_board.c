/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** set board
*/

#include "include/include.h"

match_t set_board(match_t match, int i, int y)
{
    if (i == 0)
        match.board[i][y] = '*';
    if (i == match.nbl + 1)
        match.board[i][y] = '*';
    if (y == 0)
        match.board[i][y] = '*';
    if (y == (match.nbl * 2))
        match.board[i][y] = '*';
    if (y == ((match.nbl * 2) + 1))
        match.board[i][y] = '\0';
    if (i == (match.nbl + 2))
        match.board[i] = NULL;
    return (match);
}