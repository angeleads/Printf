/*
** EPITECH PROJECT, 2020
** my_free_array.c
** File description:
** free array
*/

#include "c_lib.h"

void my_free_array(char **array)
{
    int y = 0;

    if (array == NULL)
        return;
    while (array[y] != NULL) {
        if (array[y] != NULL)
            free(array[y]);
        y++;
    }
    free(array);
}
