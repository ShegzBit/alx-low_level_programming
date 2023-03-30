#include "main.h"
#include <string.h>

/**
 * _strncat -  function that concatenates two strings.
 * @src: source
 * @dest: destination
 * @n: number.
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
int index = strlen(dest);
int a = 0;
int i = 0;

while (a < n && src[i])
{
dest[index + a] = *src;
src++;
a++;
i++;
}
dest[index + a] = '\0';
return (dest);
}
