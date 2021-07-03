/*
** EPITECH PROJECT, 2020
** my_un_putnbr_base.c
** File description:
** print unsigned int in any base
*/

#include "c_lib.h"

void my_un_putnbr_base(unsigned int nb, char *base)
{
    int num = 0;
    int size = my_strlen(base);
    char *dest = malloc(sizeof(char) * size + 1);

    while (nb) {
        dest[num++] = base[nb % size];
        nb /= size;
    }
    while (num--) {
        my_putchar(dest[num]);
    }
}