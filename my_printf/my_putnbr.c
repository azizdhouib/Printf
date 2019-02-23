/*
** ETNA PROJECT, 09/01/2019 by dhouib_a
** my_putnbr.c
** File description:
**      [...]
*/

#include "my_lib.h"

void my_putnbr(int n)
{
    long nb = n;
    long number = 1;

    if (nb == 0)
        my_putchar((nb % 10) + 48);
    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    while (nb > 0) {
        number = number * 10 + (nb % 10);
        nb /= 10;
    }
    while (number > 1) {
        my_putchar((number % 10) + 48);
        number /= 10;
    }
}

void my_putnbr_unsigned(unsigned int n)
{
    if (n <= 9)
        my_putchar((n % 10) + 48);
    else {
        my_putnbr(n / 10);
        my_putnbr(n % 10);
    }
}
