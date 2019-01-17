/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** set menu
*/

#include "include/include.h"

run_t addtext_play(run_t run)
{
    sfFont *font;
    sfVector2f origin = {850, 350};

    font = sfFont_createFromFile("Megalopolis X.ttf");
    run.text1 = sfText_create();
    sfText_setString(run.text1, "Play");
    sfText_setFont(run.text1, font);
    sfText_setPosition(run.text1, origin);
    sfText_setCharacterSize(run.text1, 80);
    return (run);
}

run_t addtext_quit(run_t run)
{
    sfFont *font;
    sfVector2f origin = {850, 470};

    font = sfFont_createFromFile("Megalopolis X.ttf");
    run.text2 = sfText_create();
    sfText_setString(run.text2, "Quit");
    sfText_setFont(run.text2, font);
    sfText_setPosition(run.text2, origin);
    sfText_setCharacterSize(run.text2, 80);
    return (run);
}

run_t set_menu(run_t run)
{
    run = addtext_play(run);
    run = addtext_quit(run);
    return (run);
}