#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: string to make duplicate of
 * Return: pointer to str duplicate
*/
char *_strdup(char *str)
{
	int n;
	char *ret;
	int i;

	if (str == NULL)
	return (NULL);

	n = strlen(str);
	ret  = malloc(n * sizeof(char));

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
