/*
** EPITECH PROJECT, 2020
** my_strncat.c
** File description:
** concatenates n char
*/

#include "c_lib.h"

char *my_strncat(char *dest, char const *src, int n)
{
    int x = 0;
    int len = my_strlen(dest);

    while (src[x] != '\0' && x < n) {
        dest[len + x] = src[x];
        x++;
    }
    dest[len + x] = '\0';
    return (dest);
}
