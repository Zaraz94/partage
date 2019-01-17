/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** my strlen pipe
*/

#include "include/include.h"

int my_strlenpipe(char *str)
{
    int i = 0;
    int j = 0;

    while (str[i] != '\0') {
        if (str[i] == '|')
            j = j + 1;
        i = i + 1;
    }
    return (j);
}