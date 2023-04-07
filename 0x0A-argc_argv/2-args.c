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
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}
