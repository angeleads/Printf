/*
** EPITECH PROJECT, 2020
** my_put_nbr_long.c
** File description:
** print a long number.c
*/

#include "c_lib.h"

long int my_put_nbr_long(long int nb)
{
    long int nbr = 0;

    if (nb < 0) {
        my_putchar('-');
        nbr = nb * (-1);
    } else
        nbr = nb;
    if (nbr <= 9)
        my_putchar(nbr + 48);
    else {
        my_put_nbr_long(nbr / 10);
        my_put_nbr_long(nbr % 10);
    }
    return (nbr);
}
