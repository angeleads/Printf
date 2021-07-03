/*
** EPITECH PROJECT, 2020
** flag_long_long_nbr.c
** File description:
** print long long integers
*/

#include "my_printf.h"

int flag_long_long_nbr(va_list ap)
{
    long long int nb = va_arg(ap, long long int);
    int counter = counter_nbr(nb);

    my_put_nbr_long_long(nb);
    return (counter);
}