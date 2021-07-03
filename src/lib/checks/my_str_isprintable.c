/*
** EPITECH PROJECT, 2020
** printable
** File description:
** printable
*/

#include "c_lib.h"

int my_str_isprintable(char const *str)
{
    int x = 0;

    while (str[x] != '\0') {
        if (str[x] <= 32 && str[x] >= 126)
            return (0);
        x++;
    }
    return (1);
}
