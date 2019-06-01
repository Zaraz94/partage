/*
** EPITECH PROJECT, 2018
** ieiufz
** File description:
** uehfu
*/

int negat(int nb, char const *str, int n)
{
    while (str[n - 1] == '-' || str[n - 1] == '+') {
        if (str[n - 1] == '-')
            nb = -nb;
        n--;
    }
    return (nb);
}

int my_getnbr(char const *str)
{
    int i = 0;
    int n = 0;
    int nbr = 0;

    while (str[i] < '0' || str[i] > '9')
        i++;
    n = i;
    while (str[i] >= '0' && str[i] <= '9') {
        nbr = nbr * 10 + str[i] - 48;
        i++;
    }
    if (n > 0)
        if (str[n - 1] == '-' || str[n - 1] == '+')
            nbr = negat(nbr, str, n);
    return (nbr);
}
