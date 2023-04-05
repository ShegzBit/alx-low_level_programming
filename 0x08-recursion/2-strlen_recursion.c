#include <stdio.h>
/**
 * _strlen_recursion - counts character in a string
 * @s : function to count
 * Return: returns size of string
 */
int _strlen_recursion(char *s)
{
int n = 0;
if (s[n] == '\0')
{
return (0);
}
else
{
return (1 + _strlen_recursion(s + 1));
}
}
