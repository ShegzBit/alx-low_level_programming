#include <stdio.h>
#include "main.h"

int main(void)
{
    char *str;
    int *arr;
    unsigned int old_size, new_size, i;

    /* Test 1: Reallocate string to larger size */
    str = malloc(10);
    strcpy(str, "Holberton");
    printf("Test 1 - Old string: %s\n", str);

    old_size = 10;
    new_size = 15;
    str = _realloc(str, old_size, new_size);
    printf("Test 1 - New string: %s\n", str);

    free(str);

    /* Test 2: Reallocate string to smaller size */
    str = malloc(10);
    strcpy(str, "Holberton");
    printf("Test 2 - Old string: %s\n", str);

    old_size = 10;
    new_size = 5;
    str = _realloc(str, old_size, new_size);
    printf("Test 2 - New string: %s\n", str);

    free(str);

    /* Test 3: Reallocate integer array to larger size */
    arr = malloc(5 * sizeof(int));
    arr[0] = 98;
    arr[1] = 402;
    arr[2] = -198;
    arr[3] = 298;
    arr[4] = -1024;

    printf("Test 3 - Old array: ");
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");

    old_size = 5 * sizeof(int);
    new_size = 10 * sizeof(int);
    arr = _realloc(arr, old_size, new_size);

    printf("Test 3 - New array: ");
    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);

    /* Test 4: Reallocate NULL pointer */
    str = NULL;
    printf("Test 4 - Old string: %s\n", str);

    old_size = 0;
    new_size = 10;
    str = _realloc(str, old_size, new_size);
    printf("Test 4 - New string: %s\n", str);

    free(str);

   return (0);
}
