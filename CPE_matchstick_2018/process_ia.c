/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** process ia fonction
*/

#include "include/include.h"

int process_ia(match_t *match)
{
    match->nbr_matches_total = nbr_pipe(*match);
    if (match->nbr_matches_total == 0) {
        my_putstr("You lost, too bad...\n");
        return (0);
    }
    ia(match);
    match->nbr_matches_total = nbr_pipe(*match);
    my_putchar('\n');
    if (match->nbr_matches_total == 0) {
        my_putstr("I lost... snif... but I'll get you next time!!\n");
        return (0);
    }
    return (1);
}