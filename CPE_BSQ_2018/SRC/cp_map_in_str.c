/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** open & read
*/

#include "../include/include.h"

char *cp_map_in_str(char *av)
{
    int fd = open(av, O_RDONLY);
    int size_map = find_size_map(av);
    char *str = malloc(sizeof(char) * size_map + 1);

    read(fd, str, size_map);
    if (str == NULL)
        return (NULL);
    str[size_map + 1] = '\0';
    return (str);
}