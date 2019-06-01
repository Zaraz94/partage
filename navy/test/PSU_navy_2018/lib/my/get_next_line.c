/*
** EPITECH PROJECT, 2018
** gnl
** File description:
** main
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "get_next_line.h"
#include "my.h"
#include <stdio.h>

char *my_strcpy2(char *array2, buf_t *buff)
{
    int i = 0;
    char *src = malloc(sizeof(char *) * my_strlen(buff->str));
    int v = 0;

    while (buff->str[i] != '\0' && buff->str[i] != '\n') {
        array2[i] = buff->str[i];
        i = i + 1;
    }
    array2[i] = '\0';
    if (buff->str[i] == '\n') {
        i++;
        while (buff->str[i] != '\0') {
            src[v] = buff->str[i];
            v++;
            i++;
        }
    }
    src[v] = '\0';
    buff->str = src;
    return (array2);
}

char *concat_str(char *buf2, char *buf, buf_t *buff)
{
    char *buf3 = malloc(sizeof(char *) * (my_strlen(buf2) + READ_SIZE));
    int b = 0;
    int c = 0;

    while (b != my_strlen(buf2)) {
        buf3[c] = buf2[b];
        b++;
        c++;
    }
    b = 0;
    while (b != buff->c && buf[b] != '\n') {
        buf3[c] = buf[b];
        b++;
        c++;
    }
    buf3[c] = '\0';
    return (buf3);
}

char *check_buf(char *buf,  buf_t *buff)
{
    int i = 0;
    int v = 0;
    while (i < READ_SIZE && buff->i == 0) {
        if (buf[i] == '\n' || buf[i] == '\0')
            buff->i = 1;
        i++;
    }
    if (i != READ_SIZE) {
        buff->str = malloc(sizeof(char) * (READ_SIZE - i));
        while (i != READ_SIZE) {
            buff->str[v] = buf[i];
            i++;
            v++;
        }
        buff->str[v] = '\0';
    }else {
        buff->str = malloc(1);
        buff->str[0] = '\0';
    }
    return (buf);
}

char *get_next_line(int fd)
{
    static buf_t buff;
    char *buf = malloc(sizeof(char *) * READ_SIZE);
    char *buf2 = malloc(1);
    buff.c = 1;
    buff.i = 0;
    buf2[0] = '\0';
    if (fd == -1)
        return (NULL);
    if (buff.str != NULL && my_strlen(buff.str) > 0)
        buf2 = my_strcpy2(buf2, &buff);
    while (buff.i == 0 && buff.c != 0) {
        buff.c = read(fd, buf, READ_SIZE);
        if (buff.c > 0) {
            buf = check_buf(buf, &buff);
            buf2  = concat_str(buf2, buf, &buff);
        }
    }
    free(buf);
    if (buff.c == 0 && my_strlen(buf2) == 0)
        return (NULL);
    return (buf2);
}
