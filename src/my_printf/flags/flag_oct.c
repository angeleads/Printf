/*
** EPITECH PROJECT, 2020
** flag_oct
** File description:
** flag for octal integer
*/

#include "my_printf.h"

int flag_oct(va_list ap)
{
    int oct = va_arg(ap, int);
    char *base = "01234567";
    int counter = counter_nbr(oct);

    my_put_nbr_base(oct, base);
    return (counter);
}