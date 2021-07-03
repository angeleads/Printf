/*
** EPITECH PROJECT, 2020
** my_revstr.c
** File description:
** reverse_string
*/

#include "c_lib.h"

char *my_revstr(char *str)
{
    int x = 0;
    int size = my_strlen(str) - 1;
    char temp;

    while (x < size) {
        temp = str[x];
        str[x] = str[size];
        str[size] = temp;
        x++;
        size--;
    }
    return (str);
}
