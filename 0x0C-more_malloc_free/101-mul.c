#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * main - entry point
 * @ac : args count
 * @av : args vector
 * Return: 0 on success
 */
int main(int ac, char *av[])
{
unsigned int max = ac - 1, i, j;
int first, second, mul;
if (max != 2)
{
printf("Error\n");
exit(98);
}
for (i = 1; i <= max; i++)
{
for (j = 0; j < strlen(av[i]); j++)
{
if (!isdigit(av[i][j]))
{
printf("Error\n");
exit(98);
}
}
}
first = atoi(av[1]);
second = atoi(av[2]);
mul = first *second;
printf("%d\n", mul);
return (0);

}
