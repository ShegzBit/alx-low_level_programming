#include "main.h"


/**
 * strcon_helper - helps _str_concat
 * @s1: destination
 * @s2: src
 * Return: ret = s1 + s2 + '\0'
*/
char *strcon_helper(char *s1, char *s2)
{
	int n1, n2, size, i = 0, j = 0;
	char *ret;

	n1 = strlen(s1), n2 = strlen(s2), size = n1 + n2 + 1;
	ret = malloc(size * sizeof(char));
	i = size - 1;
	if (ret == NULL)
	return (NULL);

	while (i < n1)
	{
		ret[i] = s1[i];
		i++;
	}
	while (i < size)
	{
		ret[i] = s2[j];
		i++;
		j++;
	}
	ret[i] = '\0';
	return (ret);
}


/**
 * str_concat - string concatenator
 * @s1: string 1 to concatenate
 * @s2: string 2 to contatenate
 * Return: pointer to string
*/
char *str_concat(char *s1, char *s2)
{
	int n1, n2, i;
	char *ret;

	if (s1 != NULL && s2 != NULL)
	{
		ret = strcon_helper(s1, s2);
	}
	else if (s1 == NULL && s2 != NULL)
	{
		n1 = 0, n2 = strlen(s2) + 1, i = n2 - 1;
		ret = malloc(n2 * sizeof(char));

		if (ret == NULL)
		return (NULL);

		strcpy(ret, s2);
	}
	else if (s1 != NULL && s2 == NULL)
	{
		n2 = 0, n1 = strlen(s1) + 1, i = n1 - 1;
		ret = malloc(n1 * sizeof(char));

		if (ret == NULL)
		return (NULL);

		strcpy(ret, s1);
		ret[i] = '\0';
	}
	else
	{
		ret = malloc(1 * sizeof(char));
		ret[0] = '\0';
	}
	
	return (ret);
}
