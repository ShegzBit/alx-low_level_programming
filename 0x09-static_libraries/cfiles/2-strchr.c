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
int i, length;
for (length = 0; s[length] != 0; length++)
{
}
for (i = 0; i < length; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return (NULL);
}
