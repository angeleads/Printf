/*
** EPITECH PROJECT, 2020
** my_str_isupper.c
** File description:
** uppercase
*/

#include "c_lib.h"

int my_str_isupper(char const *str)
{
    int x = 0;

    while (str[x] != '\0') {
        if (str[x] < 'A' || str[x] > 'Z')
            return (0);
        x++;
    }
    return (1);
}
