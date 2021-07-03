/*
** EPITECH PROJECT, 2020
** my_strlowcase.c
** File description:
** lowercased string
*/

#include "c_lib.h"

char *my_strlowcase(char *str)
{
    int x = 0;

    while (str[x] != '\0') {
        while (str[x] >= 65 && str[x] <= 90) {
            str[x] = str[x] + 32;
        }
        x++;
    }
    return (str);
}
