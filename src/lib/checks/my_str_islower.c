/*
** EPITECH PROJECT, 2020
** my_str_islow.c
** File description:
** llow
*/

#include "c_lib.h"

int my_str_islower(char const *str)
{
    int x = 0;

    while (str[x] != '\0') {
        if (str[x] < 'a' || str[x] > 'z')
            return (0);
        x++;
    }
    return (1);
}
