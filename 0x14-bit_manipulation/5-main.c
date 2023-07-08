#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n, m;
    unsigned int result;

    n = flip_bits(1024, 1);
    printf("%lu\n", n);
    n = flip_bits(402, 98);
    printf("%lu\n", n);
    n = flip_bits(1024, 3);
    printf("%lu\n", n);
    n = flip_bits(1024, 1025);
    printf("%lu\n", n);

    /*Test case 1*/
    n = 4294967295;
    m = 4294967295;
    result = flip_bits(n, m);
    printf("Test case 1: n = %lu, m = %lu, result = %u\n", n, m, result);

    /*Test case 2*/
    n = 4;
    m = 4;
    result = flip_bits(n, m);
    printf("Test case 2: n = %lu, m = %lu, result = %u\n", n, m, result);

    /*Test case 3*/
    n = 8;
    m = 4;
    result = flip_bits(n, m);
    printf("Test case 3: n = %lu, m = %lu, result = %u\n", n, m, result);

    /*Test case 4*/
    n = 15;
    m = 0;
    result = flip_bits(n, m);
    printf("Test case 4: n = %lu, m = %lu, result = %u\n", n, m, result);

    /*Test case 5*/
    n = 1431655765;
    m = 2863311530;
    result = flip_bits(n, m);
    printf("Test case 5: n = %lu, m = %lu, result = %u\n", n, m, result);

    return (0);
}