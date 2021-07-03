/*
** EPITECH PROJECT, 2020
** my_compute_power_rec.c
** File description:
** power rec
*/

#include "c_lib.h"

int my_compute_power_rec(int nb, int p)
{
    int n = 0;

    if (p == 0)
        return (1);
    else if (p < 0 || p > 2147483647)
        return (0);
    n = nb * my_compute_power_rec(nb, p - 1);
    return (n);
}
