/*
** EPITECH PROJECT, 2020
** flag_un_long_long.c
** File description:
** print an unsigned long long integer
*/

#include "my_printf.h"

int flag_un_long_long(va_list ap)
{
    unsigned long long int nb = va_arg(ap, unsigned long long int);
    int counter = counter_nbr(nb);

    my_put_un_nbr_longlong_nbr(nb);
    return (counter);
}