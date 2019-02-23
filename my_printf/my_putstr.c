/*
** ETNA PROJECT, 09/01/2019 by dhouib_a
** my_putstr.c
** File description:
**      [...]
*/

#include "my_lib.h"

void my_putstr(char *str)
{
    int i = 0;

    while (str[i]) {
        my_putchar(str[i]);
        i++;
    }
}
