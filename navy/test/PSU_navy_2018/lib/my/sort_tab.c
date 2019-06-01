/*
** EPITECH PROJECT, 2018
** DAY 6
** File description:
** task 6
*/

#include "my.h"

char **swap_tab(char **tab, int i)
{
    char *str;

    str = tab[i];
    tab[i] = tab[i + 1];
    tab[i + 1] = str;
    return (tab);
}

char **sort_tab(int ac, char **tab)
{
    int i = 0;
    int check = 0;

    while (i < ac - 1) {
        if (my_strcmp(tab[i], tab[i + 1]) > 0) {
            tab = swap_tab(tab, i);
            check =  1;
        }
        i++;
    }
    if (check == 1)
        sort_tab(ac, tab);
    return (tab);
}
