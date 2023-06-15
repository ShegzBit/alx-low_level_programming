#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - allocates memory and copy s1 and s2 up to index n into it
 * @s1: string 1
 * @s2: string 2
 * @n: number to copy from s2
 * Return: pointer to new string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len, i, size, j;
	char *ret;

	if (s1 == NULL && s2 == NULL)
	{
		ret = malloc(1);
		ret[0] = '\0';
		return (ret);
	}
	if (s1 == NULL)
	{
		ret = malloc(strlen(s2) + 1);
		strcpy(ret, s2);
		return (ret);
	}
	if (s2 == NULL)
	{
		ret = malloc(strlen(s1) + 1);
		strcpy(ret, s1);
		return (ret);
	}
	len = strlen(s1);
	size = (n > strlen(s2)) ? len + strlen(s2) + 1 : len + n + 1;
	ret =  malloc(sizeof(char) * size);
	if (ret == NULL)
		return (NULL);

	strcpy(ret, s1);
	for (i = len, j = 0; i < size; i++, j++)
	{
		ret[i] = s2[j];
	}
	ret[i] = '\0';

	return (ret);
}
