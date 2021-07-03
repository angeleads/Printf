/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** lib include file
*/

#ifndef C_LIB_H_
#define C_LIB_H_

#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void my_putchar(char);
void my_swap(int *, int *);
void my_free_array(char **);

int my_isneg(int);
int my_put_nbr(int);
int my_put_un_nbr(unsigned int);
int my_put_un_nbr_long(unsigned long int);
long int my_put_nbr_long(long int);
long long int my_put_nbr_long_long(long long int);
int my_put_nbr_base(int, char *);
void my_un_putnbr_base(unsigned int, char *);
int my_putstr(char const *);
int my_strlen(char const *);
int my_getnbr(char const *);
int my_compute_power_rec(int, int);
int my_compute_square_root(int);
int my_is_prime(int);
int my_find_prime_sup(int);
int my_strcmp(char *, char const *);
int my_strncmp(char const *, char const *, int);
int my_str_isalpha(char const *);
int my_str_isnum(char const *);
int my_str_islower(char const *);
int my_str_isupper(char const *);
int my_str_isprintable(char const *);

float my_put_float_nbr(float);

char *my_strcpy(char *, char const *);
char *my_strncpy(char *, char const *, int);
char *my_revstr(char *);
char *my_strupcase(char *);
char *my_strlowcase(char *);
char *my_strcapitalize(char *);
char *my_strcat(char *, char const *);
char *my_strncat(char *, char const *, int);
char *my_strdup(char *);

#endif
