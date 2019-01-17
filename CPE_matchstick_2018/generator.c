/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** generator fonction
*/

#include "include/include.h"

int generator(int max)
{
    int min = 1;

    srandom(time(NULL));
    return (random()%(max-min+1) + min);
}