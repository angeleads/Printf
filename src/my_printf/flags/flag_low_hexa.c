/*
** EPITECH PROJECT, 2020
** flag_hexa.c
** File description:
** flag for hexadecimal integers
*/

#include "my_printf.h"

int flag_low_hexa(va_list ap)
{
    int hexa = va_arg(ap, int);
    char *base = "0123456789abcdef";
    int counter = counter_nbr(hexa);

    my_put_nbr_base(hexa, base);
    return (counter);
}