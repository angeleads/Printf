/*
** EPITECH PROJECT, 2020
** my_strdup.c
** File description:
** create string malloc it and copy
*/

#include "c_lib.h"

char *my_strdup(char *str)
{
    char *dup = malloc(sizeof(char) * my_strlen(str) + 1);

    if (dup == NULL)
        return (NULL);
    dup = my_strcpy(dup, str);
    return (dup);
}
