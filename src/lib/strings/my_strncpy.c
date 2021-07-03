/*
** EPITECH PROJECT, 2020
** my_strncpy.c
** File description:
** cpy n char in str
*/

#include "c_lib.h"

char *my_strncpy(char *dest, char const *src, int n)
{
    int x = 0;

    while (x < n) {
        dest[x] = src[x];
        x++;
    }
    return (dest);
}
