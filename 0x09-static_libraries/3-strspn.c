#include "main.h"
/**
 * _strspn -  a function that gets the length of a prefix substring.
 * @s : string to be traversed
 * @accept : string to test with
 * Return: number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int n = 0;
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
n++;
j++;
}
else
{
break;
}
}
}
return (n);
}
