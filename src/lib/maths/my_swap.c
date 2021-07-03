/*
** EPITECH PROJECT, 2020
** my_swap.c
** File description:
** swap
*/

#include "c_lib.h"

void my_swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
