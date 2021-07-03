/*
** EPITECH PROJECT, 2020
** my_put_un_nbr_long.c
** File description:
** print a long unsigned int
*/

#include "c_lib.h"

int my_put_un_nbr_long(unsigned long int nb)
{
    unsigned long int num = 0;

    if (nb > 9)
        my_put_nbr(nb / 10);
    num = (nb % 10) + 48;
    my_putchar(num);
    return (0);
}