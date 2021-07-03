/*
** EPITECH PROJECT, 2020
** my_str_isnum.c
** File description:
** is_num
*/

#include "c_lib.h"

int my_str_isnum(char const *str)
{
    int x = 0;

    while (str[x] != '\0') {
        if (str[x] < '1' || str[x] > '9')
            return (0);
        x++;
    }
    return (1);
}
