#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * allocate_memory - Allocates memory for a new string
 * @size: Size of memory to allocate
 *
 * Return: Pointer to allocated memory, or NULL if allocation fails
 */
char *allocate_memory(int size)
{
char *str = malloc(size * sizeof(char));
if (str == NULL)
{
return (NULL);
}
return (str);
}

/**
 * copy_string - Copies a string from source to destination
 * @src: Source string
 * @dest: Destination string
 */
void copy_string(char *src, char *dest)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
}

/**
 * str_concat - Concatenates two strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: Pointer to new string,
 * or NULL if allocation fails
 */
char *str_concat(char *s1, char *s2)
{
int len1 = (s1 != NULL) ? strlen(s1) : 0;
int len2 = (s2 != NULL) ? strlen(s2) : 0;

char *cat = allocate_memory(len1 + len2 + 1);
if (cat == NULL)
{
return (NULL);
}

if (s1 != NULL)
{
copy_string(s1, cat);
}
if (s2 != NULL)
{
copy_string(s2, cat + len1);
}

return (cat);
}
