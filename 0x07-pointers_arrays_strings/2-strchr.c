#include <stddef.h>
#include "main.h"
/**
 * _strchr - finds the first characterin the string passed to it
 * @s : string to be passed
 * @c : character to find
 * Return: pointer to the first character found
 */
char *_strchr(char *s, char c)
{
if (s == NULL)
{
return (NULL);
}

while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
}
