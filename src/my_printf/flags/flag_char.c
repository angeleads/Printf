/*
** EPITECH PROJECT, 2020
** flag_char.c
** File description:
** flag to print a char
*/

#include "my_printf.h"

int flag_char(va_list ap)
{
    char c = va_arg(ap, int);

    my_putchar(c);
    return (0);
}
