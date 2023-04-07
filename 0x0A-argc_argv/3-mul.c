#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of var passed to it
 * @argc : argument count
 * @argv : array of arguments
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
int mul = 1, i;
if (argc == 3)
{
for (i = 1; i < argc; i++)
{
mul *= atoi(argv[i]);
}
printf("%d\n", mul);
}
else
{
printf("ERROR\n");
return (1);
}
return (0);
}
