/*
** EPITECH PROJECT, 2018
** gnl
** File description:
** main
*/

#ifndef READ_SIZE
#define READ_SIZE (1)
#endif /*READ_SIZE*/

typedef struct buf_s
{
    int i;
    int c;
    char *str;
}buf_t;

char *get_next_line(int fd);
