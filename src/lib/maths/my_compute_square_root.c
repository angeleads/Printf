/*
** EPITECH PROJECT, 2020
** my_compute_square_root.c
** File description:
** square root
*/

#include "c_lib.h"

int my_compute_square_root(int nb)
{
    int n = 0;

    if (n < 0)
        return (0);
    while ((n * n) != nb) {
        if ((n * n) > nb)
            return (0);
        n++;
    }
    return (n);
}
