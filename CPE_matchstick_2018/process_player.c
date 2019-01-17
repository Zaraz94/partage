/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** process player fonction
*/

#include "include/include.h"

void process_player(match_t *match)
{
    get_line(match);
    match->line = my_atoi(match->str_l);
    error1(match->line, match->nbl);
    get_matches(match);
    match->matches = my_atoi(match->str_m);
    error2(match->matches, match->nbl2, match->nb2);
    change_pipe_to_space(match, match->line, match->nbl, match->matches);
    display_board(*match);
    my_putchar('\n');
}