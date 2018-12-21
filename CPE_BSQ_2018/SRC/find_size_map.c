/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** find size of the map
*/

#include "../include/include.h"

int find_size_map(char *av)
{
    struct stat buffer;
    int nbr = 0;

    stat(av, &buffer);
    nbr = buffer.st_size;
    return (nbr);
}