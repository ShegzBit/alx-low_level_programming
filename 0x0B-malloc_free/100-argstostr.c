#include "main.h"

/**
 * argstostr - converts args to string ret
 * @ac: number of args passed
 * @av: pointer to args
 * Return: ret
*/
char *argstostr(int ac, char **av)
{
	/**
	 * iterate through strings sum up the length of each
	 * string and add 1 at the end of each strings for \n
	*/
	int i, size = 0, j, temp, k = 0;
	char *ret;

	if (av == NULL || ac == 0)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
		size += strlen(av[i]);
		size += 1;
	}

	/* allocate memory of that size to a new string*/
	ret = malloc(size * sizeof(char));
	if (ret == NULL)
	return (NULL);
	/**
	 * move through each changing index for the beginning of
	 * each string to zero while less that size of alpha string
	*/
	for (i = 0; i < ac; i++)
	{
		temp = strlen(av[i]);
		for (j = 0; j < temp; j++, k++)
		{
			ret[k] = av[i][j];
		}
		ret[k++] = '\n';
	}
	return (ret);
}
