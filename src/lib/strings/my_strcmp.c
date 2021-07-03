/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** compare two strings
*/

#include "c_lib.h"

int my_strcmp(char *s1, char const *s2)
{
    int x = 0;

    while (s1[x] != '\0' && s2[x] != '\0' && s1[x] == s2[x])
        x++;
    if (s1[x] < s2[x])
        return (-1);
    else if (s1[x] > s2[x])
        return (1);
    else
        return (0);
}
