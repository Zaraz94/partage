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
#include <stdlib.h>

void my_putchar(char c);
int my_strlen(char const *str);
void my_putstr(char const *str);
int my_putnbr(int nb);
int my_putnbr_unsigned(unsigned int nb);
void my_printf(char *str, ...);
char *my_revstr(char *str);
void print_nbr(char *str, int **i, va_list ap);
int my_putnbr_base(int nbr, char *const base);
void process_fonction(char *str, int *i, va_list ap);
void print_str(char *str , int **i, va_list ap);
void special_case(char *str, int **i);
void case_n(char *str, int **i, va_list ap);
void print_char(char *str, int **i, va_list ap);
void print_unsigned_int(char *st, int **i, va_list ap);
void print_octal_int(char *str, int **i, va_list ap);
void print_hexa(char *str, int **i, va_list ap);
void print_hexa_maj(char *str, int **i, va_list ap);
void print_adress(char *str, int **i, va_list ap);

#endif