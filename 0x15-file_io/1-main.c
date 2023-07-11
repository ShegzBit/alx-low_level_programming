#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    int res;
    struct stat st;
    char buf[1024];
    FILE *fp;

    if (ac != 3)
    {
        dprintf(2, "Usage: %s filename text\n", av[0]);
        exit(1);
    }
    res = create_file(av[1], av[2]);
    printf("-> %i)\n", res);

    /* Test creating a new file with text content */
    res = create_file(av[1], av[2]);
    if (res != 1)
    {
        printf("Test 1 failed: create_file did not return 1\n");
        return (1);
    }
    if (stat(av[1], &st) != 0 || !(st.st_mode & S_IRUSR) || !(st.st_mode & S_IWUSR))
    {
        printf("Test 1 failed: file was not created with correct permissions\n");
        return (1);
    }
    fp = fopen(av[1], "r");
    if (!fp || !fgets(buf, sizeof(buf), fp) || strcmp(buf, av[2]) != 0)
    {
        printf("Test 1 failed: file content is not correct\n");
        return (1);
    }
    fclose(fp);

    /* Test creating a new file with empty text content */
    res = create_file(av[1], "");
    if (res != 1)
    {
        printf("Test 2 failed: create_file did not return 1\n");
        return (1);
    }
    if (stat(av[1], &st) != 0 || !(st.st_mode & S_IRUSR) || !(st.st_mode & S_IWUSR))
    {
        printf("Test 2 failed: file was not created with correct permissions\n");
        return (1);
    }
    fp = fopen(av[1], "r");
    if (!fp || fgets(buf, sizeof(buf), fp))
    {
        printf("Test 2 failed: file content is not correct\n");
        return (1);
    }
    fclose(fp);

    /* Test creating a new file with NULL text content */
    res = create_file(av[1], NULL);
    if (res != 1)
    {
        printf("Test 3 failed: create_file did not return 1\n");
        return (1);
    }
    if (stat(av[1], &st) != 0 || !(st.st_mode & S_IRUSR) || !(st.st_mode & S_IWUSR))
    {
        printf("Test 3 failed: file was not created with correct permissions\n");
        return (1);
    }
    fp = fopen(av[1], "r");
    if (!fp || fgets(buf, sizeof(buf), fp))
    {
        printf("Test 3 failed: file content is not correct\n");
        return (0);
    }
    return (0);
}
