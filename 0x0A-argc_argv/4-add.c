#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - print sum of integer arguments passed to it
 * @argc : argument count
 * @argv : array of arguments
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
int mul = 0, i;
if (argc == 1)
{
printf("0\n");
}
else
{
for (i = 1; i < argc; i++)
{
if (atoi(argv[i]) != 0)
{
mul += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
}
}
return (0);
}
