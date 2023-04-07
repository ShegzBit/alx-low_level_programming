#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - print sum of integer arguments passed to it
 * @argc : argument count
 * @argv : array of arguments
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
  int mul = 0, i, j, size;
if (argc == 1)
{
printf("0\n");
}
else
{
for (i = 1; i < argc; i++)
{
size = strlen(argv[i]);
for (j = 0; j < size; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
mul += atoi(argv[i]);
}
printf("%d\n", mul);
}
return (0);
}
