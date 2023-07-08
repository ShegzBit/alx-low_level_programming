#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = 1024;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 0;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    clear_bit(&n, 1);
    printf("%lu\n", n);
    printf("__________________________________________________________________________\n");
    n = 2;
    clear_bit(&n, 1);
    printf("%lu\n", n);

    n = 2;
    printf("%d\n", clear_bit(&n, 65));
    n = 0xFFFFFFFFFFFFFFFF;
    clear_bit(&n, 63);
    printf("%lx\n", n);
    printf("%d\n", clear_bit(NULL, 5));
    return (0);
}