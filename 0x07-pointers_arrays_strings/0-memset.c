#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s : address to fill
 * @b : byte to fill with
 * @n : number of position to fill in memory
 * Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
