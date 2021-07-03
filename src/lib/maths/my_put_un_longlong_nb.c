/*
** EPITECH PROJECT, 2020
** my_put_un_longlong_nbr.c
** File description:
** print a unsigned long long interger
*/

#include "c_lib.h"

int my_put_un_longlong_nbr(unsigned long long int nb)
{
    unsigned long long int num = 0;

    if (nb > 9)
        my_put_nbr(nb / 10);
    num = (nb % 10) + 48;
    my_putchar(num);
    return (0);
}