/*
** ETNA PROJECT, 12/01/2019 by dhouib_a
** precision.c
** File description:
**      [...]
*/

#include "my_lib.h"

void print_n(va_list va_list, const char *form, int z)
{
    char *nombre;
    int i = 0;
    int j = 0;
    int k = z + 1;

    while (form[++z] >= '0' && form[z] <= '9')
        ++i;
    nombre = malloc(sizeof(char) * i);
    if (form[z] == 'f') {
        z = i;
        while (i--) {
            nombre[j] = form[k];
            k++;
            j++;
        }
    }
    print_float(va_arg(va_list, double), my_getnbr(nombre));
    free(nombre);
}
