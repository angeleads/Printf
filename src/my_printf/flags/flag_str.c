/*
** EPITECH PROJECT, 2020
** flag_str.c
** File description:
** print a string
*/

#include "my_printf.h"

int flag_str(va_list ap)
{
    char *str = va_arg(ap, char *);

    my_putstr(str);
    return (0);
}
