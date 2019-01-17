/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** ini game fonction
*/

#include "include/include.h"

match_t ini_game(match_t match, char **av)
{
    char *nb1 = av[1];

    match.nb2 = av[2];
    match.nbl = my_atoi(nb1);
    match.nbl2 = my_atoi(match.nb2);
    match.board = malloc(sizeof(char *) * (match.nbl + 2));
    match.stop = 0;
    return (match);
}