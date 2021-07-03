/*
** EPITECH PROJECT, 2020
** flag_binary.c
** File description:
** flag to convert an integer into a base 2
*/

#include "my_printf.h"

int flag_binary(va_list ap)
{
    int nb = va_arg(ap, int);
    char *base = "01";
    int counter = counter_nbr(nb);

    my_un_putnbr_base(nb, base);
    return (counter);
}