/*
** EPITECH PROJECT, 2018
** o)oef
** File description:
** kzpe
*/

#ifndef MY_H_
#define MY_H_

void my_putchar(char c);

int my_isneg(int nb);

int my_put_nbr(int nb);

void my_swap(int *a, int *b);

void my_putstr(char const *str);

int my_strlen(char const *str);

int my_getnbr(char const *str);

char *my_strdup(char const *str);

void my_sort_int_array(int *tab, int size);

int my_compute_power_rec(int nb, int power);

int my_compute_square_root(int nb);

int my_is_prime(int nb);

int my_find_prime_sup(int nb);

char *my_strcpy(char *dest, char const *src);

char *my_strncpy(char *dest, char const *src, int n);

char *my_revstr(char *str);

char *my_strstr(char *str, char const *to_find);

int my_strcmp(char *str, char *str2);

int my_strncmp(char const *s1, char const *s2, int n);

char *my_strupcase(char *str);

char *my_strlowcase(char *str);

char *my_strcapitalize(char *str);

int my_str_isalpha(char const *str);

int my_str_isnum(char const *str);

int my_str_islower(char const *str);

int my_str_isupper(char const *str);

int my_str_isprintable(char const *str);

int my_showstr(char const *str);

int my_showmem(char const *str, int size);

char *my_strcat(char *dest, char const *src);

void put_base(int i, char * bases);

void put_baselong(long i, char * bases);

int my_putstr_s(char const *str);

char *nbr_to_str(int nb);

void my_putnbr_base(long nb, char *bases);

void my_putnbr_baselong(long i, char *bases);

void my_show_word_array(char * const * tab);

char *concat_params(int argc, char **argv);

char **my_str_to_word_array(char const *str);

char **malloc_str_tab(char **tab, int space);

int compt_space(char const *str);

int calc_size(int i);

int calc_size2(int argc, char **argv);

char *nbr_to_str_2(int nb, char *str, int i, int z);

int calc_size2(int argc, char **argv);

char **sort_tab(int ac, char **tab);

int calc_nbr(char **str);

int calc_prio(char **str);

int calc_res(char **str);

int do_op(int fa, int sa, char op);

void my_show_int_array(int **tab, int nb);

#endif /*MY_H_*/
