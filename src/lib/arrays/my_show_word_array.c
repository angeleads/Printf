/*
** EPITECH PROJECT, 2020
** my_show_word_array
** File description:
** display words of array
*/

#include "c_lib.h"

int my_show_word_array(char * const *tab)
{
    int x = 0;

    while (tab[x] != 0) {
        my_putstr(tab[x]);
        my_putchar('\n');
        x++;
    }
    return (0);
}
