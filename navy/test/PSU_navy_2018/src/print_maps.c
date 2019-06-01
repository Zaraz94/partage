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
#include "print.h"
#include "navy.h"

void print_maps(player_t player)
{
    my_printf("\nmy positions:\n");
    my_show_word_array(player.my_map);
    my_putchar('\n');
    my_printf("enemy's positions:\n");
    my_show_word_array(player.other_map);
    my_putchar('\n');
}
