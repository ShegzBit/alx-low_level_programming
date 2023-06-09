#include "main.h"

/**
 * main - prints number of arguments passed to it
 * @ac: argument count
 * @av:argument vector
 * Return: 0 on success
*/
int main(int ac, char **av)
{
    (void) av;
    printf("%d\n", ac - 1);
    return (0);
}