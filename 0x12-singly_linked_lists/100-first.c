#include "stdio.h"

/**
 * print - prints a specific sentence
 */
void __attribute__((constructor)) print()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
