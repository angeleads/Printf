/*
** EPITECH PROJECT, 2020
** flag_nb_i.c
** File description:
** flag i print number
*/

#include "my_printf.h"

int flag_nb_i(va_list ap)
{
    int nb = va_arg(ap, int);
    int counter = counter_nbr(nb);

    my_put_nbr(nb);
    return (counter);
}