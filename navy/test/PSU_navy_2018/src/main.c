/*
** EPITECH PROJECT, 2018
** navy
** File description:
** main
*/

#include "my.h"
#include "print.h"
#include "navy.h"

void print_h(void)
{
    my_printf("USAGE\n\t./navy [first_player_pid] navy_positions\n");
    my_printf("DESCRIPTION\n\tfirst_player_pid: only for the 2nd player");
    my_printf(". pid of the first player.\n\tnavy_positions: file ");
    my_printf("representing the positions of the ships.\n");
}

int main(int ac, char **av)
{
    int i = 0;

    if (ac > 3 || ac == 1)
        return (84);
    else if (ac == 2) {
        if (my_strcmp(av[1], "-h") == 1)
            print_h();
        else {
            i = player_one(av[1]);
            return (i);
        }
    } else {
        i = player_two(av[1], av[2]);
        if (i == 84)
            return (84);
        else
            return (i);
    }
    return (0);
}
