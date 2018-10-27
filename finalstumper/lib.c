/*
** EPITECH PROJECT, 2018
** rush3
** File description:
** lib.c
*/

#include <unistd.h>

void	my_putchar(char c)
{
	write(1, &c, 1);
}

void	my_putstr(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		my_putchar(str[i]);
		i++;
	}
}

int my_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0') {
		i++;
	}
	return (i);
}

void	my_putnbr(int nb)
{
	int i = 0;

	if (nb >= 10) {
		my_putnbr(nb / 10);
		my_putchar((nb % 10) + 48);
	} else
		my_putchar(nb + 48);
}
