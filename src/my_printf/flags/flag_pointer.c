/*
** EPITECH PROJECT, 2020
** flag_pointer.c
** File description:
** flag for pointers
*/

#include "my_printf.h"

int flag_pointer(va_list ap)
{
    char *base = "0123456789abcdef";
    unsigned int ptr = va_arg(ap, unsigned int);

    my_putstr("0x");
    my_put_nbr_base(ptr, base);
    return (0);
}