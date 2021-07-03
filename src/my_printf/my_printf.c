/*
** EPITECH PROJECT, 2020
** my_printf.c
** File description:
** myprintf main function
*/

#include "my_printf.h"

void my_printf(char *arg, ...)
{
    va_list ap;
    int i = 0;

    va_start(ap, arg);
    while (arg[i] != '\0') {
        if (arg[i] == '%' && arg[i + 1] != '\0') {
            set_printf(ap, arg[i + 1]);
            i++;
        }
        else
            my_putchar(arg[i]);
        i++;
    }
    va_end(ap);
}
