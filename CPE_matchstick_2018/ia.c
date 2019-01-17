/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** IA fonction
*/

#include "include/include.h"

void ia_part4(match_t *match, ia_t *IA)
{
    if (IA->nbrpipe != 0 && IA->nbrpipe < match->nbl2) {
        my_putstr("IA turn...\n");
        my_putstr("AI's remove ");
        my_put_nbr(IA->nbrpipe);
        my_putstr(" match(es) from line ");
        my_put_nbr(IA->turn);
        IA->nbp = IA->nbrpipe - 1;
        if (IA->nbrpipe > 1)
            change_pipe_to_space(match, IA->turn, match->nbl, IA->nbp);
        if (IA->nbrpipe == 1)
            change_pipe_to_space(match, IA->turn, match->nbl, 1);
        IA->finish = 1;
    }
}

void ia_part3(match_t *match, ia_t *IA)
{
    if (IA->nbrpipe != 0 && IA->nbrpipe >= match->nbl2) {
        my_putstr("IA turn...\n");
        my_putstr("AI's remove ");
        IA->diff = IA->nbrpipe - match->nbl2;
        IA->nbp = IA->nbrpipe - 1;
        if (IA->diff >= 2) {
            change_pipe_to_space(match, IA->turn, match->nbl
                , IA->diff);
            my_put_nbr(IA->diff);
        }
        if (IA->diff <= 1) {
            change_pipe_to_space(match, IA->turn, match->nbl
                , IA->nbp);
            my_put_nbr(IA->nbp);
        }
        my_putstr(" match(es) from line ");
        my_put_nbr(IA->turn);
        IA->finish = 1;
    }
}

void ia_part2(match_t *match, ia_t *IA)
{
    while (IA->nbrpipe == 0) {
        IA->turn = IA->turn + 1;
        IA->nbrpipe = my_strlenpipe(match->board[IA->turn]);
        if (IA->turn > match->nbl) {
            IA->turn = 1;
            IA->nbrpipe = my_strlenpipe(match->board[IA->turn]);
        }
    }
}

void ia(match_t *match)
{
    ia_t IA;

    IA.gnbr = generator(match->nbl);
    IA.turn = IA.gnbr;
    while (IA.finish != 1) {
        IA.nbrpipe = my_strlenpipe(match->board[IA.turn]);
        ia_part2(match, &IA);
        ia_part3(match, &IA);
        ia_part4(match, &IA);
    }
    IA.finish = 0;
    my_putchar('\n');
    display_board(*match);
}