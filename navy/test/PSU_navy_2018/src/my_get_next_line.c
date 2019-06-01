/*
** EPITECH PROJECT, 2018
** get_next_line.c
** File description:
** Day02
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int my_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

char *next_tmp(char *tmp)
{
	int idx = 0;
	char *next_tmp = malloc(sizeof(char) * (my_strlen(tmp) + 2));

	while (tmp[idx] != '\0') {
		next_tmp[idx] = tmp[idx];
		idx += 1;
	}
	next_tmp[idx + 1] = '\0';
	free(tmp);
	return (next_tmp);
}

char *my_get_next_line(int fd)
{
	static char buff[2];
	static char *tmp;
	int j = 1;
	int idx = 0;

    tmp = malloc(sizeof(char) * 1);
	if (!tmp){
		return (NULL);
	}
	tmp[0] = '\0';
	while ((j = read(fd, buff, 1)) > 0 && buff[0] != '\n' && j <= 1) {
		buff[1] = '\0';
		tmp = next_tmp(tmp);
		tmp[idx] = buff[0];
		idx += 1;
      	}
	if (buff[0] == '\n')
		tmp[idx] = '\0';
	if (idx == 0 || j == 0)
		return (NULL);
	else
		return (tmp);
}
