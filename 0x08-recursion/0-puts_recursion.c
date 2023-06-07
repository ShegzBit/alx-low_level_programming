#include "main.h"

/**
 * _puts_recursion - puts duplicate using recursion
 * @s: string to print from
*/
void _puts_recursion(char *s)
{
	int num = 0;

	recursion_ass(s, num);
}

/**
 * recursion_ass - puts_recursion assistant
 * @s: string to put
 * @num: index position to put
*/
void recursion_ass(char *s, int num)
{
	int len = strlen(s);

	if (num < len)
	{
		_putchar(s[num]);
		num++;
		recursion_ass(s, num);
	}
	else
	{
		_putchar('\n');
	}
}
