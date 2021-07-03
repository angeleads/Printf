/*
** EPITECH PROJECT, 2020
** flag_un_nb.c
** File description:
** print an unsigned number
*/

#include "my_printf.h"

int flag_un_nb(va_list ap)
{
    unsigned int nb = va_arg(ap, unsigned int);
    int counter = counter_nbr(nb);

    my_put_un_nbr(nb);
    return (counter);
}