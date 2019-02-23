/*
** ETNA PROJECT, 09/01/2019 by dhouib_a
** my_putchar.c
** File description:
**      [...]
*/

#include "my_lib.h"

void my_putchar(int c)
{
    write(1, &c, 1);
}
