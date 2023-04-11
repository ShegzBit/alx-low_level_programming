#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - simulates strdup
 * @str : string to copy
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
int len, i;
char *cpy;
if (str == NULL)
{
return (NULL);
}
len = strlen(str) + 1;
cpy = malloc((sizeof(char) * len));
if (cpy == NULL)
{
return (NULL);
}
for (i = 0; i < len; i++)
{
cpy[i] = str[i];
}
return (cpy);
}
