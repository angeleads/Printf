/*
** EPITECH PROJECT, 2020
** set_printf.c
** File description:
** main set function
*/

#include "my_printf.h"

void set_printf(va_list ap, char flag)
{
    int x = 0;
    t_pointer *flag_list = set_pointers_my_printf();
    t_pointer *flag_rec = set_recognition_my_printf();

    if (flag_list == NULL || flag_rec == NULL)
        return;
    while (flag_list[x].myprintf != NULL) {
        if (flag == flag_rec[x].flag)
            flag_list[x].myprintf(ap);
        x++;
    }
    free(flag_list);
    free(flag_rec);
}
