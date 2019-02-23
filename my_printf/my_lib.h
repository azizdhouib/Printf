/*
** ETNA PROJECT, 08/01/2019 by dhouib_a
** lib.h
** File description:
**      [...]
*/

#ifndef MY_LIB_H
#define MY_LIB_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct content_s
{
    const char *format;
    void (*func[4])();
} content_t;

void my_putnbr(int n);
void my_putchar(int c);
void my_putstr(char *str);
int my_strlen(char *str);
int my_nbrlen(int n);
int my_getnbr(char *str);
void my_putnbr_base(int n, char *base);
void my_putnbr_unsigned(unsigned int);
int check_option_base(const char *format, va_list va_list, int i);
int my_printf(const char *format, ...);
void print_float(double n, int p);
int check_option_float(const char *format, va_list va_list, int i);
int check_option(const char *format, va_list va_list, int i);
void print_n(va_list va_list, const char *format, int z);
#endif
