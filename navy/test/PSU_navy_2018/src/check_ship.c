/*
** EPITECH PROJECT, 2019
** NAVY PROJECT
** File description:
** malloc a tab
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "my.h"
#include "get_next_line.h"
#include "navy.h"
#include "print.h"

int check_length_next(char *str)
{
    static int four = 0;
    static int five = 0;

    if (my_getnbr(str) == 4 && four == 0) {
        four = 1;
        return (0);
    }
    if (my_getnbr(str) == 5 && five == 0) {
        five = 1;
        return (0);
    }
    printf("%d\n%d\n", four, five);
    return (84);
}

int check_length(char *str)
{
    static int two = 0;
    static int tree = 0;

    printf("%d\n", my_getnbr(str));
    if (my_getnbr(str) == 2 && two == 0) {
        two = 1;
        return (0);
    }
    if (my_getnbr(str) == 3 && tree == 0) {
        tree = 1;
        return (0);
    }
    printf("%d\n%d\n", two, tree);
    return (check_length_next(str));
}

int check_ship(char *str)
{
    int i = 0;
    printf("%s\n", str);

    if (str[2] == str[5] && str[3] < str[6]) {
        i = str[6] - str[3] + 1;
        if (i != (my_getnbr(str)))
            return (84);
        else
            return (check_length(str));
    } else
        return (84);
    if (str[2] == str[5] && str[3] > str[6]) {
        i = str[3] - str[6] + 1;
        if (i != (my_getnbr(str)))
            return (84);
        else
            return (check_length(str));
    } else
        return (84);
    return (check_length(str));
}

int check_ship2(char *str)
{
    int i = 0;
    printf("%s\n", str);

    if (str[3] == str[6] && str[2] < str[5]) {
        i = str[5] - str[2] + 1;
        if (i != (my_getnbr(str)))
            return (84);
        else
            return (0);
    }
    if (str[3] == str[6] && str[2] > str[5]) {
        i = str[2] - str[5] + 1;
        if (i != (my_getnbr(str)))
            return (84);
        else
            return (0);
    }
    return (check_ship(str));
}
