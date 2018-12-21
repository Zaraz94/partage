/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** main
*/

#include "../include/include.h"

int main(int ac, char **av)
{
    char *str = cp_map_in_str(av[1]);

    if (str == NULL)
        return (84);
    if (ac != 2)
        return (84);
    str = delete_first_line(str);
    change_str_to_tab(str);
    return 0;
}