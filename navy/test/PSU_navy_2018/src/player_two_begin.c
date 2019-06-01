/*
** EPITECH PROJECT, 2019
** navy
** File description:
** begin player two
*/

#include "my.h"
#include "print.h"
#include "navy.h"

int player_two(char *pid_str, char *str)
{
    pid_t pid = getpid();
    int i = 1;
    player_t two;

    if (check_all(str) == 84)
        return (84);
    create_map(&two, str);
    two.pid = my_getnbr(pid_str);
    i = kill(two.pid, 12);
    if (i != 0) {
        my_printf("Wrong pid\n");
        return (84);
    }
    my_printf("my_pid: %d\nsuccessfully connected\n", pid);
    print_maps(two);
    return (game_two(&two));
}
