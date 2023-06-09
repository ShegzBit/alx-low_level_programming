#include <stddef.h>
/**
 * _strpbrk - returns the first char in s and also in accept
 * @s : string to be checked through
 * @accept : string containing characters to search for
 * Return: returns the first char in s and also in accept
 */
char *_strpbrk(char *s, char *accept)
{
int index;

while (*s)
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
{
return (s);
}
}
s++;
}
return (NULL);
}
