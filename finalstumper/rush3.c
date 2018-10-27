/*
** EPITECH PROJECT, 2018
** rush3
** File description:
** rush3
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#define BUFF_SIZE (4096)

int my_strlen(char *str);
void my_putchar(char c);
void my_putstr(char *str);
void my_putnbr(int nb);
void print_r1(int y, int j);
void print_r2(int y, int j);
void print_r3(int y, int j);
void print_r4(int y, int j);
void print_r5(int y, int j);

void print_all(int y, int j)
{
	int i = 3;

	while (i <= 4) {
		my_putstr("[rush1-");
		my_putnbr(i);
		my_putstr("] ");
		my_putnbr(y);
		my_putchar(' ');
		my_putnbr(j);
		my_putstr(" || ");
		i = i + 1;
	}
	print_r5(y, j);
}

void print_rush4_5(char *buff, int y, int j)
{
	if (buff[y * j + j - 2] == 'C') {
		print_r4(y, j);
	} else {
		print_r5(y, j);
	}
}

void find_rush(char *buff, int y, int j)
{
	int i = 0;
	
	if (buff[i] == 'o') {
		print_r1(y, j);
	} else if (buff[i] == '*' || buff[i] == '/') {
		print_r2(y, j);
	} else {
		if (y == 1 || j == 1) {
			print_all(y, j);
		} else if (buff[y - 1] == 'C') {
			print_rush4_5(buff, y, j);
		} else {
			print_r3(y, j);
		}
	}
}

void rush3(char *buff)
{
	int i = 0;
	int y = 0;
	int j = 0;
	
	while (buff[i] != '\n') {
		i = i + 1;
	}
	y = i;
	if (y == 840)
		my_putstr("none\n");
	while (buff[i] != '\0') {
		if (buff[i] == '\n')
			j = j + 1;
		i = i + 1;
	}
	if (y != 840)
		find_rush(buff, y, j);
}

int main(void)
{
	char buff[BUFF_SIZE + 1];
	int offset;
	int len;
	
	offset = 0;
	while ((len = read(0, buff + offset, BUFF_SIZE - offset)) > 0) {
		offset = offset + len;
	}
	buff[offset] = '\0';
	if (len < 0)
		return (84);
	rush3(buff);
	return (0);
}
