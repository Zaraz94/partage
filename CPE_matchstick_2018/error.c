/*
** EPITECH PROJECT, 2018
** CPE_matchstick_2017
** File description:
** fonction error
*/

#include "include/include.h"

int error(int ac, char **av)
{
    if (ac > 3) {
        my_putstr("too much arguments\n");
        return (EXIT_FAILURE);
    }
    if (ac < 2) {
        my_putstr("too few arguments\n");
        return (EXIT_FAILURE);
    }
    if (av[1] == NULL) {
        my_putstr("error: this line is out of range\n");
        return (EXIT_FAILURE);
    }
    return (0);
}

void error1(int line, int nbl)
{
    if (line > nbl) {
        my_putstr("error: this line is out of range\n");
    }
    if (line == 0)
        my_putstr("error: invalid input (positive number expected)");
}

void error2(int matches, int nbl2, char *nb2)
{
    if (matches > nbl2) {
        my_putstr("error: you cannot remove more than ");
        my_putstr(nb2);
        my_putstr(" matches per turn\n");
    }
}
