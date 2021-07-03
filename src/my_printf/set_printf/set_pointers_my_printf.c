/*
** EPITECH PROJECT, 2020
** set_pointers_my_printf.c
** File description:
** main func for pointer func
*/

#include "my_printf.h"

t_pointer *set_pointers_my_printf(void)
{
    t_pointer *pointer_function = malloc(sizeof(t_pointer) * (NB_FLAG + 1));

    if (pointer_function == NULL)
        return (NULL);
    pointer_function[FLAG_CHAR].myprintf = &flag_char;
    pointer_function[FLAG_STR].myprintf = &flag_str;
    pointer_function[FLAG_NB_D].myprintf = &flag_nb_d;
    pointer_function[FLAG_NB_I].myprintf = &flag_nb_i;
    pointer_function[FLAG_UN_NB].myprintf = &flag_un_nb;
    pointer_function[FLAG_O].myprintf = &flag_oct;
    pointer_function[FLAG_PTR].myprintf = &flag_pointer;
    pointer_function[FLAG_X_MIN].myprintf = &flag_low_hexa;
    pointer_function[FLAG_X_MAX].myprintf = &flag_up_hexa;
    pointer_function[FLAG_B].myprintf = &flag_binary;
    pointer_function[FLAG_PTG].myprintf = &flag_pourcentage;
    pointer_function[FLAG_NULL].myprintf = NULL;
    return (pointer_function);
}
