/*
** EPITECH PROJECT, 2020
** my_strcat.c
** File description:
** concatenate strings
*/

#include "c_lib.h"

char *my_strcat(char *dest, char const *src)
{
    int x = 0;
    int len = my_strlen(dest);

    while (src[x] != '\0') {
        dest[len + x] = src[x];
        x++;
    }
    dest[len + x] = '\0';
    return (dest);
}
