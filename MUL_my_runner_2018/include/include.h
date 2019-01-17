/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** include
*/

#ifndef INCLUDE_H
#define INCLUDE_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
#include <SFML/Audio.h>
#include <SFML/Graphics.h>

typedef struct run_s run_t;
struct run_s {
    sfRenderWindow *wdw;
    sfEvent event;
    sfVector2i mcoord;
    sfSprite *gameo;
    sfSprite *backg;
    sfIntRect brect;
    sfVector2f mv_speedb;
    sfSprite *road;
    sfSprite *enemie;
    sfIntRect erect;
    sfClock *eclock;
    sfTime etime;
    sfVector2f eoffset;
    float emicrosec;
    sfSprite *chara;
    sfIntRect crect;
    sfClock *clock;
    sfClock *mv_clock;
    sfTime time;
    sfTime mv_time;
    float microsec;
    float mv_microsec;
    int mv_i;
    int board;
    int score;
    sfText *text1;
    sfText *text2;
    sfMusic *musiq;
};

void my_putchar(char c);
int my_putnbr(int nb);
int start_game(run_t run);
run_t create_window(run_t run);
run_t ini_game(run_t run);
run_t close_window(run_t run);
run_t set_background(run_t run);
run_t move_background(run_t run);
run_t set_road(run_t run);
run_t move_road(run_t run);
run_t set_character(run_t run);
run_t manip_chara(run_t run);
run_t jump_chara(run_t run);
run_t set_enemie(run_t run);
run_t mv_enemie(run_t run);
run_t manip_enemie(run_t run);
run_t check_colision(run_t run);
run_t jump_chara2(run_t run, sfVector2f position, sfVector2f offset2);
run_t ini_game2(run_t run);
run_t addtext_play(run_t run);
run_t addtext_quit(run_t run);
run_t set_menu(run_t run);
run_t menu(run_t run);
run_t game(run_t run);
run_t change_color_text1(run_t run);
run_t change_color_text2(run_t run);
run_t press_play(run_t run);
run_t press_play2(run_t run);
run_t press_quit(run_t run);
run_t press_quit2(run_t run);
run_t set_music(run_t run);
run_t set_game_over(run_t run);
run_t game_over(run_t run);

#endif