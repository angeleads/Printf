/*
** EPITECH PROJECT, 2020
** counter_nbr.c
** File description:
** function to count the nbr of characters
*/

#include "my_printf.h"

int counter_nbr(int nb)
{
    int i = 0;

    while (nb) {
        nb = nb / 10;
        i++;
    }
    return (i);
}