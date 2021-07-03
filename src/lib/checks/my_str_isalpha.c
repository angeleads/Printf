/*
** EPITECH PROJECT, 2020
** my_str_isalpha.c
** File description:
** alphanum string
*/

#include "c_lib.h"

int my_str_isalpha(char const *str)
{
    int x = 0;

    while (str[x] != '\0') {
        if ((str[x] >= 'A' && str[x] <= 'Z') ||
            (str[x] >= 'a' && str[x] <= 'z'))
            x++;
        else
            return (0);
    }
    return (1);
}
