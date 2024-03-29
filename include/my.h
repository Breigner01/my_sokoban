/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** prototypes header
*/

#ifndef MY_H_
#define MY_H_

#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>
#include <inttypes.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define ATN(c) (c - '0')
#define NTA(n) (n + '0')

int my_isneg(int);
void my_swap(int *, int *);
int my_strlen(const char *);
int my_getnbr(const char *);
void my_sort_int_array(int *, int);
int my_compute_power_rec(int, int);
int my_compute_square_root(int);
int my_is_prime(int);
int my_find_prime_sup(int);
char *my_strcpy(char *, char const *);
char *my_strncpy(char *, char const *, int);
char *my_revstr(char *);
char *my_strstr(char *, char const *);
int my_strcmp(char const *, char const *);
int my_strncmp(char const *, char const *, int);
char *my_strupcase(char *);
char *my_strlowcase(char *);
char *my_strcapitalize(char *);
int my_str_isalpha(char const *);
int my_str_isnum(char const *);
int my_str_islower(char const *);
int my_str_isupper(char const *);
int my_str_isprintable(char const *);
int my_showstr(char const *);
int my_showmem(char const *, int);
char *my_strcat(char *, char const *);
char *my_strncat(char *, char const *, int);
char *my_strdup(char const *);
void *my_memset(void *, int, size_t);

// my_printf
void my_putchar(const char);
void my_putstr(const char *);
void my_put_nbr(int);
void my_put_binary(uint64_t);
void my_put_hexa_maj(uint64_t);
void my_put_hexa_min(uint64_t);
void my_put_address(uint64_t);
void my_put_long(long int);
void my_put_long_long(long long int);
void my_put_unsigned_int(unsigned int);
void my_put_unsigned_long(unsigned long int);
void my_put_octal(uint64_t);
void my_put_unprintable(char *);
void my_put_short(short int);
void my_put_unsigned_short(short unsigned int);

// fill tab
int count_line_len(const char *);
int count_line_nb(const char *);
char **fill_tab(const char *);

#endif
