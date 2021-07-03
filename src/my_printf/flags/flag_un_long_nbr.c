/*
** EPITECH PROJECT, 2020
** flag_un_long_nbr.c
** File description:
** print an unsigned long integers
*/

#include "my_printf.h"

int flag_un_long_nbr(va_list ap)
{
    unsigned long int nb = va_arg(ap, unsigned long int);
    int counter = counter_nbr(nb);

    my_put_un_nbr_long(nb);
    return (counter);
}