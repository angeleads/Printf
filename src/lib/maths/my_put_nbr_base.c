/*
** EPITECH PROJECT, 2020
** my_put_nbr_base.c
** File description:
** putnbr base
*/

#include "c_lib.h"

int my_put_nbr_base(int nb, char *base)
{
    int size = my_strlen(base);
    int neg_nb = nb * (-1);

    if (nb == 0) {
        return (0);
    }
    else if (nb < 0) {
        my_putchar('-');
        my_put_nbr_base(neg_nb, base);
    } else {
        my_put_nbr_base((nb / size), base);
        my_putchar(base[nb % size]);
    }
    return (0);
}
