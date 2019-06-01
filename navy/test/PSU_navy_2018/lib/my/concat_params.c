/*
** EPITECH PROJECT, 2018
** day 09
** File description:
** task
*/

#include "my.h"
#include <stdlib.h>

int calc_size2(int argc, char **argv)
{
    int size = 0;
    int i = 0;

    while (i < argc) {
        size = size + my_strlen(argv[i]);
        i++;
    }
    return (size + i);
}

char *concat_params(int argc, char **argv)
{
    char *str = malloc(sizeof(char) * calc_size2(argc, argv));
    int i = 0;
    int j = 0;
    int k = 0;

    while (i != argc){
        j = 0;
        while (argv[i][j] != '\0') {
            str[k] = argv[i][j];
            j++;
            k++;
        }
        str[k] = '\n';
        k++;
        i++;
    }
    return (str);
}
