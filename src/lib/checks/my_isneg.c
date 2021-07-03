/*
** EPITECH PROJECT, 2020
** my_isneg.c
** File description:
** N neg P pos
*/

#include "c_lib.h"

int my_isneg(int n)
{
    if (n >= 0)
        my_putchar('P');
    else
        my_putchar('N');
    return (0);
}
