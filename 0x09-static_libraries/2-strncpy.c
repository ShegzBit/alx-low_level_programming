#include <stdlib.h>
#include "main.h"
/**
 * _strncpy - string copy to index n
 * @src : variable to copy from
 * @dest : variable to copy to
 * @n : number of characters to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

i = 0;

while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}

while (i < n)
{
dest[i] = '\0';
i++;
}

return (dest);
}
