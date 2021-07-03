/*
** EPITECH PROJECT, 2020
** my_strncmp.c
** File description:
** my_strncmp.c function
*/

#include "c_lib.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    int x = 0;

    while (s1[x] != '\0' && s2[x] != '\0' && x < n) {
        if (s1[x] == s2[x]) {
            return (s1[x] - s2[x]);
        }
        x++;
    }
    return (0);
}
