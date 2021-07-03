/*
** EPITECH PROJECT, 2020
** set_recognition_my_printf.c
** File description:
** set to recognize function
*/

#include "my_printf.h"

t_pointer *set_recognition_my_printf(void)
{
    t_pointer *recognition_action = malloc(sizeof(t_pointer) * (NB_FLAG + 1));

    if (recognition_action == NULL)
        return (NULL);
    recognition_action[FLAG_CHAR].flag = 'c';
    recognition_action[FLAG_STR].flag = 's';
    recognition_action[FLAG_NB_D].flag = 'd';
    recognition_action[FLAG_NB_I].flag = 'i';
    recognition_action[FLAG_UN_NB].flag = 'u';
    recognition_action[FLAG_O].flag = 'o';
    recognition_action[FLAG_X_MIN].flag = 'x';
    recognition_action[FLAG_X_MAX].flag = 'X';
    recognition_action[FLAG_B].flag = 'b';
    recognition_action[FLAG_PTG].flag = '%';
    recognition_action[FLAG_PTR].flag = 'p';
    recognition_action[FLAG_NULL].flag  = '\0';
    return (recognition_action);
}
