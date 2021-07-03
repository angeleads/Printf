/*
** EPITECH PROJECT, 2020
** flag_nb.c
** File description:
** flag_nb.c
*/

#include "my_printf.h"

int flag_nb_d(va_list ap)
{
    int nb = va_arg(ap, int);
    int counter = counter_nbr(nb);

    my_put_nbr(nb);
    return (counter);
}
