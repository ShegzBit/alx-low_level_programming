#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: string to make duplicate of
 * Return: pointer to str duplicate
*/
char *_strdup(char *str)
{
	int n = strlen(str);
	char *ret = malloc(n * sizeof(char));
	int i;

	if (ret == NULL)
	return (NULL);

	i = 0;
	while (i < n)
	{
		ret[i] = str[i];
		i++;
	}
	return (ret);

}
