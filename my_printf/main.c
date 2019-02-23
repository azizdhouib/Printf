/*
** ETNA PROJECT, 09/01/2019 by dhouib_a
** main.c
** File description:
**      [...]
*/

#include "my_lib.h"

int main(void)
{
    my_printf("1 - %o\n", 42); 							
    my_printf("2 - %u\n", (unsigned int)4200000000); 	
    my_printf("3 - %x\n", 42); 							
    my_printf("4 - %X\n", 42); 							
    my_printf("5 - %d%%\n", 42);
    return (0);
}
