/*
** EPITECH PROJECT, 2020
** strupcase
** File description:
** strupcase
*/

#include "c_lib.h"

char *my_strupcase(char *str)
{
    int x = 0;

    while (str[x] != '\0') {
        if (str[x] >= 'a' && str[x] <= 'z')
            str[x] = str[x] + ('A' - 'a');
        x++;
    }
    return (str);
}
