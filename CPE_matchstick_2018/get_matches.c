/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** get matches fonction
*/

#include "include/include.h"

void get_matches(match_t *match)
{
    my_putstr("matches: ");
    match->size2 = read(0, match->buffer, 10);
    match->str_m = my_strcpybis(match->buffer, match->size2);
}