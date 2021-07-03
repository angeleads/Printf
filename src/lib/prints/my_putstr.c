/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** display string
*/

#include "c_lib.h"

int my_putstr(char const *str)
{
    int x = 0;

    while (str[x] != '\0') {
        my_putchar(str[x]);
        x++;
    }
    return (0);
}
