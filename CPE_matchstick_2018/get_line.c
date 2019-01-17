/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** get line fonction
*/

#include "include/include.h"

void get_line(match_t *match)
{
    my_putstr("your turn:\n");
    my_putstr("line: ");
    match->size = read(0, match->buff, 10);
    match->str_l = my_strcpybis(match->buff, match->size);
}