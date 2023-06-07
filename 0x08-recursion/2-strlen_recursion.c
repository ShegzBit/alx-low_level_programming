#include "main.h"

/**
 * _strlen_recursion - calculates length of null terminated string
 * @s: string of whose length to calculate
 *
 * Return: length of s
*/
int _strlen_recursion(char *s)
{
	int num = 0;
	int ret = strlen_ass(s, num);

	return (ret);
}

/**
 * strlen_ass - assists main function with counting
 * @s: stirng to count
 * @num: starting point (0);
 * Return: length of s
*/
int strlen_ass(char *s, int num)
{
	if (s[num] != '\0')
	{
		num++;
		return (strlen_ass(s, num));
	}
	return (num);
}
