/*
** EPITECH PROJECT, 2020
** my_putchar.c
** File description:
** display char
*/

#include "c_lib.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
