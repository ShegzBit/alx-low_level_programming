#include "main.h"

/**
 * is_palindrome - checks if palindrome
 * @s: str to check
 * Return: 1 on true 0 on false
*/
int is_palindrome(char *s)
{
	int len = strlen(s);
	int result;
	char *rev = malloc((len + 1) * sizeof(char));

	if (rev == NULL)
		return (0);
	rev = revstr(s, rev, len - 1, 0);
	rev[len] = '\0';
	result = strcmp(s, rev) == 0;
	free(rev);
	return (result);
}

/**
 * revstr - helps palindrome
 * @str: str to check
 * @rev: str reversed
 * @len: length of str
 * @i: counter
 * Return: reversed string
*/
char *revstr(char *str, char *rev, int len, int i)
{
	if (len >= 0)
	{
		rev[i] = str[len];
		i++;
		rev = revstr(str, rev, len - 1, i);
	}
	return (rev);
}
