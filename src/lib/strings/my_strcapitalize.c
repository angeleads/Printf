/*
** EPITECH PROJECT, 2020
** my_strcapitalize.c
** File description:
** capitalizer
*/

#include "c_lib.h"

char low_to_up(char c)
{
    if (c >= 'a' && c <= 'z')
        c = c - 32;
    return (c);
}

char up_to_low(char c)
{
    if (c >= 'A' && c <= 'Z')
        c = c + 32;
    return (c);
}

char *my_strcapitalize(char *str)
{
    int x = 1;

    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = low_to_up(str[0]);
    while (str[x] != '\0') {
        str[x] = up_to_low(str[x]);
        if (str[x - 1] == ' ' || str[x - 1] == '-' || str[x - 1] == '+')
            str[x] = low_to_up(str[x]);
        x++;
    }
    return (str);
}
