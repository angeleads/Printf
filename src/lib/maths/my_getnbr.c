/*
** EPITECH PROJECT, 2020
** getnbr
** File description:
** getnvr
*/

#include "c_lib.h"

int my_getnbr(char const *str)
{
    int result = 0;
    int x = 0;
    int mult = 1;

    while ((str[x] == '+' || str[x] == '-') && str[x] != '\0') {
        if (str[x] == '-')
            mult = mult * - 1;
        x++;
    }
    while (str[x] >= '0' && str[x] <= '9') {
        result *= 10;
        result = result + (str[x] - '0');
        if (result < 0)
            if (result != -2147483648 || mult == 1)
                return (0);
        x++;
    }
    return (result * mult);
}
