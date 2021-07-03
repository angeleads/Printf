/*
** EPITECH PROJECT, 2020
** my_find_prime_sup.c
** File description:
** find prime nbr
*/

#include "c_lib.h"

int my_find_prime_sup(int nb)
{
    int x = my_is_prime(nb);

    while (x == 0) {
        nb++;
        x = my_is_prime(nb);
    }
    return (nb);
}
