/*
** EPITECH PROJECT, 2020
** my_put_float_nbr.c
** File description:
** print a float number
*/

#include "c_lib.h"

float my_put_float_nbr(float nb)
{
    float nbr = 0;

    if (nbr < 0) {
        my_putchar('-');
        nbr = nb * (-1);
    } else
        nbr = nb;
    if (nbr <= 9)
        my_putchar(nbr + 48);
    else {
        my_put_float_nbr(nbr / 10);
    }
    return (nbr);
}