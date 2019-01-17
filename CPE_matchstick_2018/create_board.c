/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** create board
*/

#include "include/include.h"

match_t create_board(match_t match)
{
    for (int i = 0; i < (match.nbl + 2); i++) {
        match.board[i] = malloc(sizeof(char) * ((match.nbl * 2) + 2));
        for (int y = 0; y < ((match.nbl * 2) + 1); y++) {
            match.board[i][y] = ' ';
            match = set_board(match, i, y);
        }
    }
    return (match);
}