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
int i, j = 0;
dest = (char *) malloc(n + 1);
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
while (src[j])
{
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
