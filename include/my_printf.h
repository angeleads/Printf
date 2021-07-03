/*
** EPITECH PROJECT, 2020
** my_printf.h
** File description:
** my_printf.h
*/

#ifndef MY_PRINTF_H_
#define MY_PRINTF_H_

#include "c_lib.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

#define NB_FLAG (11)

typedef struct s_pointer {
    int(*myprintf)(va_list ap);
    char flag;
} t_pointer;

typedef enum count_flag
{
    FLAG_CHAR = 0,
    FLAG_STR = 1,
    FLAG_NB_D,
    FLAG_NB_I,
    FLAG_UN_NB,
    FLAG_O,
    FLAG_X_MIN,
    FLAG_X_MAX,
    FLAG_B,
    FLAG_PTG,
    FLAG_PTR,
    FLAG_NULL,
} t_count_flag;

int flag_char(va_list);
int flag_str(va_list);
int flag_nb_d(va_list);
int flag_nb_i(va_list);
int flag_un_nb(va_list);
int flag_pourcentage(va_list);
int flag_pointer(va_list);
int flag_oct(va_list);
int flag_binary(va_list);
int flag_low_hexa(va_list);
int flag_up_hexa(va_list);
int flag_long_long_nbr(va_list);
int flag_long_nbr(va_list);
int flag_un_long_nbr(va_list);
int flag_un_long_long(va_list);

int counter_nbr(int);
int check_flags(char);
void my_grep_char(char *, char);
void split_string(char *, char);

t_pointer *set_pointers_my_printf(void);
t_pointer *set_recognition_my_printf(void);
void set_printf(va_list, char);
void my_printf(char *, ...);

#endif
