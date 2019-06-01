/*
** EPITECH PROJECT, 2018
** my_hunter
** File description:
** nbr to str
*/

#include <stdlib.h>
#include "my.h"

int calc_size(int i)
{
    int z = 0;

    if (i > 9)
        while (i >= 10){
            z++;
            i = i / 10;
        }
    else
        z = 0;
    return (z);
}

char *nbr_to_str_2(int nb, char *str, int i, int z)
{
    int h = 0;

    if (z > 1) {
        str[i] = (nb % 10 + 48);
        z--;
        i++;
        nbr_to_str_2(nb / 10, str, i, z);
    }else
        str[i] = (nb + 48);
    while (str[h] > 47 && str[h] < 58)
        h++;
    str[h] = '\0';
    str = my_revstr(str);
    return (str);
}

char *nbr_to_str(int nb)
{
    int z = calc_size(nb) + 1;
    int i = 0;
    int h = 0;
    char *str = malloc(sizeof(char *) * z);

    str = nbr_to_str_2(nb, str, i, z);
    while (str[h] > 47 && str[h] < 58)
        h++;
    str[h] = '\0';
    return (str);
}
