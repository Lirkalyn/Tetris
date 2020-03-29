/*
** EPITECH PROJECT, 2019
** PSU_navy_2019
** File description:
** my_put.c
*/

#include "tetris.h"

void my_putchar (char c)
{
    write (1, &c, 1);
}

int my_putstr(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        write (1, &str[i], 1);
        i++;
    }
    return (0);
}

int my_strlen (char *str)
{
    int l = 0;

    while (str && str[l] != '\0') {
        l++;
    }
    return (l);
}

int neg(int nbr)
{
    if (nbr == -2147483648) {
        my_putchar('-');
        my_putstr("nbr");
    }
    else if (nbr < 0) {
        nbr *= -1;
        my_putchar('-');
    }
    return (nbr);
}

int my_put_nbr(int nbr)
{
    nbr = neg(nbr);
    if (nbr >= 10) {
        my_put_nbr(nbr / 10);
        my_put_nbr(nbr % 10);
    }
    else
        my_putchar(nbr + '0');
    return (0);
}
