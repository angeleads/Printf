/*
** EPITECH PROJECT, 2020
** my_put_un_nbr_base.c
** File description:
** print an usigned nbr depending on base
*/

#include "c_lib.h"

int my_put_un_nbr(unsigned int nb)
{
    unsigned int num = 0;

    if (nb > 9)
        my_put_nbr(nb / 10);
    num = (nb % 10) + 48;
    my_putchar(num);
    return (0);
}