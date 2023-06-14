#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * word_count - count the number of words in a string
 * @str: the string to count words in
 *
 * Return: the number of words in the string
 */
int word_count(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str != '\0')
	{
		if (*str != ' ' && !in_word)
		{
			count++;
			in_word = 1;
		}
		else if (*str == ' ')
		{
			in_word = 0;
		}
		str++;
	}

	return (count);
}

/**
 * strtow - split a string into an array of words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings, or NULL on failure
 */
char **strtow(char *str)
{
	int num_words, i, j, k;
	char **words;

	if (str == NULL || *str == '\0' || (*str == ' ' && *(str + 1) == '\0'))
		return (NULL);

	num_words = word_count(str);
	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	i = 0;
	while (*str != '\0' && i < num_words)
	{
		while (*str == ' ')
			str++;

		j = 0;
		while (str[j] != ' ' && str[j] != '\0')
			j++;

		words[i] = malloc((j + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		for (k = 0; k < j; k++)
			words[i][k] = str[k];
		words[i][k] = '\0';

		str += j;
		i++;
	}
	words[i] = NULL;
	return (words);
}
