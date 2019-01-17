/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** game fonction
*/

#include "include/include.h"

int game(match_t *match)
{
    match->buff = malloc(sizeof(char) * 10);
    match->buffer = malloc(sizeof(char) * 10);
    match->line = 0;
    match->matches = 0;
    match->nbr_matches_total = 0;
    process_player(match);
    if (process_ia(match) == 0)
        return (0);
    free(match->str_l);
    free(match->str_m);
    return (match->nbr_matches_total);
}