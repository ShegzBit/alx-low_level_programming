#include <stdio.h>
#include <string.h>

/**
 * main - prints the name of the file
 * Return: 0 on success
 */

int main(void)
{
int size, i;
char *file = __FILE__;
size = strlen(file);
for (i = 0; i < size; i++)
{
putchar(file[i]);
}
putchar('\n');
return (0);
}
