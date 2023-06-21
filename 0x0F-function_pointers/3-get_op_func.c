#include "3-calc.h"

/**
 * get_op_func - gets the appropraite op_func
 * @s: indicator for appropriate function
 * Return: appropriate functiom
*/
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	while (ops[i].op != NULL)
	{
		if (*s != ops[i].op[0])
		{
			i++;
			continue;
		}
		return (ops[i].f);
	}
	return (NULL);
}
