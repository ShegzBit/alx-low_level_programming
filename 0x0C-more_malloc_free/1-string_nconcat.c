#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * len - returns length
 * @s1 : var to count
 * Return: 0
 */

int len(char *s1)
{
int len1;
if (s1 == NULL)
{
len1 = 0;
}
else
{
len1 = strlen(s1);
}
return (len1);
}

/**
 * allocate_memory - allocates memory
 * @s1 : s1
 * @s2 : s2
 * @n : n
 * Return: pointer
 */

char *allocate_memory(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = (s1 == NULL) ? 0 : strlen(s1);
unsigned int len2 = (s2 == NULL) ? 0 : strlen(s2);
char *ptr;

if (s1 == NULL)
{
ptr = malloc(len2 + 1);
}
else if (s2 == NULL)
{
ptr = malloc(len1 + 1);
}
else if (n <= len2)
{
ptr = malloc(len1 + n + 1);
}
else
{
ptr = malloc(len1 + len2 + 1);
}

return (ptr);
}
/**
 * string_nconcat - concats
 * @s1 : s1
 * @s2 : s2
 * @n : n
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len2 = len(s2), len1 = len(s1), i, size, v = 0;
char *ptr;
size = (n <= len2) ? len1 + n : len1 + len2;
ptr = allocate_memory(s1, s2, n);

if (ptr == NULL)
{
return (NULL);
}

for (i = 0; i < size; i++)
{
if (i < len1 && s1 != NULL)
{
ptr[i] = s1[i];
}
else if (i >= len1 && s2 != NULL)
{
ptr[i] = s2[v];
v++;
}
}

ptr[i] = '\0';

return (ptr);
}
