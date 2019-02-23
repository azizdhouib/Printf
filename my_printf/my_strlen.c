/*
** ETNA PROJECT, 09/01/2019 by dhouib_a
** my_strlen.c
** File description:
**      [...]
*/

#include "my_lib.h"

int my_strlen(char *str)
{
    int i = 0;

    while (str[i])
        i++;
    return i;
}
