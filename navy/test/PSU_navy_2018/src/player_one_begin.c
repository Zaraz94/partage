/*
** EPITECH PROJECT, 2019
** navy
** File description:
** begin player one
*/

#include "my.h"
#include "print.h"
#include "navy.h"
#include "get_next_line.h"

int pid_2;

void handler(int sig, siginfo_t * siginfo, void *t)
{
    if (sig == 10 || sig == 12) {
        my_printf("enemy connected\n");
        pid_2 = siginfo->si_pid;
    }
    else
        kill(getpid(), 9);
}

void create_map(player_t *one, char *str)
{
    int fd;
    char *str2;

    rempl_struc(one);
    fd = open(str, O_RDONLY);
    while (str2 != NULL) {
        str2 = get_next_line(fd);
        if (str2 != NULL)
            add_ship(one, str2);
    }
    close(fd);
}

int player_one(char *str)
{
    pid_t pid = getpid();
    struct sigaction act;
    player_t one;

    if (check_all(str) == 84)
        return (84);
    act.sa_sigaction = &handler;
    act.sa_flags = SA_SIGINFO;
    create_map(&one, str);
    my_printf("my_pid: %d\nwaiting for enemy connection...\n\n", pid);
    sigaction(12, &act, NULL);
    pause();
    one.pid = pid_2;
    print_maps(one);
    if (game_one(&one) == -1)
        return (1);
    else
        return (0);
}
