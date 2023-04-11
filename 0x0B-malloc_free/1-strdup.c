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
int len = strlen(str), i;
char *cpy;
if (str == NULL)
{
return (NULL);
}
cpy = malloc((sizeof(char) * len) + 1);
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
