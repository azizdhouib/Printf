/*
** ETNA PROJECT, 09/01/2019 by dhouib_a
** my_printf.c
** File description:
**      [...]
*/

#include "my_lib.h"

void print_float(double n, int p)
{
    int cons;

    if (n < 0) {
        my_putchar('-');
        n *= -1;
    }
    cons = n;
    my_putnbr(cons);
    my_putchar('.');
    while (p--) {
        n = (n - cons) * 10;
        cons = n;
        my_putchar(cons + 48);
    }
}

int check_option_float(const char *form, va_list va_list, int i)
{
    switch (form[i + 1]) {
    case 'f':
        print_float(va_arg(va_list, double), 6);
        return 1;
    case '.':
        print_n(va_list, form, i + 1);
        return 1;
    }
    return 0;
}

int check_option_base(const char *form, va_list va_list, int i)
{
    switch (form[i + 1]) {
    case 'o':
        my_putnbr_base(va_arg(va_list, int), "01234567");
        return 1;
    case 'x':
        my_putnbr_base(va_arg(va_list, int), "0123456789abcdef");
        return 1;
    case 'X':
        my_putnbr_base(va_arg(va_list, int), "0123456789ABCDEF");
        return 1;
    case '%':
        my_putchar('%');
        return 1;
    }
    return 0;
}

int check_option(const char *form, va_list va_list, int i)
{
    switch (form[i + 1]) {
    case 'd':
        my_putnbr(va_arg(va_list, int));
        return 1;
    case 'i':
        my_putnbr(va_arg(va_list, int));
        return 1;
    case 's':
        my_putstr(va_arg(va_list, char*));
        return 1;
    case 'c':
        my_putchar(va_arg(va_list, int));
        return 1;
    case 'u':
        my_putnbr_unsigned(va_arg(va_list, int));
        return 1;
    }
    return 0;
}

int my_printf(const char *form, ...)
{
    int i = -1;
    va_list va_list;

    va_start(va_list, form);
    while (form[++i]) {
        if (form[i] == '%' && form[i + 1] != '\0') {
            if (check_option(form, va_list, i) ||
                check_option_base(form, va_list, i) ||
                (check_option_float(form, va_list, i)))
                i++;
            else
                my_putchar('%');;
        } else
            my_putchar(form[i]);
    }
    va_end(va_list);
    return 1;
}
