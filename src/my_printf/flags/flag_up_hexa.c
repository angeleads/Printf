/*
** EPITECH PROJECT, 2020
** flag_up_hexa.c
** File description:
** flag for uppercase hexa
*/

#include "my_printf.h"

int flag_up_hexa(va_list ap)
{
    int hexa = va_arg(ap, int);
    char *base = "0123456789ABCDEF";
    int counter = counter_nbr(hexa);

    my_put_nbr_base(hexa, base);
    return (counter);
}