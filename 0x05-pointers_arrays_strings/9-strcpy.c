#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src, including \0.
 *@src: pointer.
 *@dest: pointer.
 *Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
int i, p;

for (p = 0; src[p] != '\0'; p++)
{
}

for (i = 0; i <= p; i++)
{
dest[i] = src[i];
}
return (dest);
}
