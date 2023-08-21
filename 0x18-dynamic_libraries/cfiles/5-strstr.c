#include <stddef.h>
/**
 * _strstr - takes a superstring and finds fundstring
 * @haystack : superstring
 * @needle : substring
 * Return: returns pointer to the beginning of substring
 */
char *_strstr(char *haystack, char *needle)
{
char *p1 = haystack;
char *p2 = needle;

while (*haystack != '\0')
{
p1 = haystack;
p2 = needle;

while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
{
p1++;
p2++;
}

if (*p2 == '\0')
{
return (haystack);
}

haystack++;
}

return (NULL);
}
